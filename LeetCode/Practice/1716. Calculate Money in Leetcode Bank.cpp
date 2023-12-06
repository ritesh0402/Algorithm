class Solution
{
public:
   int totalMoney(int n)
   {
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

class Solution
{
public:
   int totalMoney(int n)
   {
      int balance = 0;
      balance = ((n / 7) * 28) + ((n / 7) * (n / 7 - 1) * 7 / 2);
      for (int i = 0; i < n % 7; i++)
      {
         balance += (n / 7) + i + 1;
      }
      return balance;
   }
};