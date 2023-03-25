class Solution
{
public:
   int longestContinuousSubstring(string s)
   {
      ios_base::sync_with_stdio(false);
      int ans = 1, cnt = 1;
      for (int i = 0; i < s.length() - 1; i++)
      {
         if (s[i + 1] - s[i] == 1)
         {
            cnt++;
         }
         else
         {
            ans = max(ans, cnt);
            cnt = 1;
         }
      }
      ans = max(ans, cnt);
      return ans;
   }
};