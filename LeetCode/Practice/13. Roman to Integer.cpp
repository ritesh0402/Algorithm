class Solution
{
public:
   int romanToInt(string s)
   {
      int ans = 0;
      // unordered_map<char, int> ump;
      int ump[1001];
      ump['I'] = 1;
      ump['V'] = 5;
      ump['X'] = 10;
      ump['L'] = 50;
      ump['C'] = 100;
      ump['D'] = 500;
      ump['M'] = 1000;
      ans = ump[s[s.length() - 1]];
      for (int i = s.length() - 2; i >= 0; i--)
      {
         if (ump[s[i]] >= ump[s[i + 1]])
         {
            ans += ump[s[i]];
            // cout << ans << " case1" << endl;
         }
         else
         {
            ans = ans - ump[s[i]];
            // cout << ans << " case2" << endl;
         }
      }
      return ans;
   }
};