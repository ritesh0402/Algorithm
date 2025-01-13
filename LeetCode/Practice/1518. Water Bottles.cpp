class Solution
{
public:
   int numWaterBottles(int numBottles, int numExchange)
   {
      int emptyBottles = 0, ans = 0, newBottles = 0;
      while (numBottles > 0)
      {
         ans += numBottles;
         newBottles = (numBottles + emptyBottles) / numExchange;
         emptyBottles = (numBottles + emptyBottles) % numExchange;
         numBottles = newBottles;
      }
      return ans;
   }
};