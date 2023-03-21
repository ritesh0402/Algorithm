class Solution
{
public:
   int numberOfArithmeticSlices(vector<int> &nums)
   {
      if (nums.size() < 3)
         return 0;

      int subArrLen = 0, ans = 0, lastDiff = nums[1] - nums[0], curr = 0;
      for (int i = 0; i < nums.size() - 2; i++)
      {
         curr = nums[i + 2] - nums[i + 1];
         if (lastDiff == curr)
         {
            subArrLen++;
         }
         else
         {
            ans += subArrLen * (subArrLen + 1) / 2;
            subArrLen = 0;
         }
         lastDiff = curr;
      }
      if (lastDiff == curr)
      {
         ans += subArrLen * (subArrLen + 1) / 2;
      }
      return ans;
   }
};