class Solution
{
public:
   int minTimeToType(string word)
   {
      ios_base::sync_with_stdio(false);
      int curr = 0, ans = 0;
      for (char &x : word)
      {
         x -= 'a';
         ans += min(abs(curr - x), 26 - abs(x - curr)) + 1;
         curr = x;
      }
      return ans;
   }
};