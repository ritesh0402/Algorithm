class Solution
{
public:
   int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
   {
      int ans = 0;
      if (k > 0)
      {
         ans += min(k, numOnes);
         k -= numOnes;
      }
      if (k > 0)
      {
         k -= numZeros;
      }
      if (k > 0)
      {
         ans -= min(k, numNegOnes);
      }
      return ans;
   }
};