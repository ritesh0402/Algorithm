class Solution
{
public:
   string largestGoodInteger(string num)
   {
      int cnt = 1;
      char maxc = 0, uni = num[0];
      string ans;
      for (int i = 1; i < num.length(); i++)
      {
         if (num[i] == uni)
         {
            cnt++;
            if (cnt == 3)
            {
               maxc = max(maxc, num[i]);
               cnt = 1;
            }
         }
         else
         {
            uni = num[i];
            cnt = 1;
         }
      }
      ans = maxc;
      ans += maxc;
      ans += maxc;
      return maxc == 0 ? "" : ans;
   }
};