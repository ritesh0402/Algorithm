class Solution
{
public:
   int distMoney(int money, int children)
   {
      if (money < children)
         return -1;
      if (money > children * 8)
         return children - 1;
      money -= children; // 1 dollar for each child
      int ans = money / 7;
      // money %= 7; //money left
      if (children - ans == 1 && money % 7 == 3)
      {
         ans--;
      }
      return ans;
   }
};
