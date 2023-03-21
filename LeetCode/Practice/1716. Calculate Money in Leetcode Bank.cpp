class Solution
{
public:
   int totalMoney(int n)
   {
      //       each week base       each week increment    last days
      // ans = (n/7)*28          +   7 * k               + loop;
      int ans = 0, k = 0;
      k = (n / 7) * ((n / 7) - 1) / 2;
      ans = ((n / 7) * 28) + (7 * k);
      for (int i = 0; i < n % 7; i++)
      {
         ans += (n / 7) + 1 + i;
      }
      return ans;
   }
};