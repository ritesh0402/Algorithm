class Solution
{
public:
   int combinationSum4(vector<int> &nums, int target)
   {
      vector<int> dp(target + 1, -1);
      return subSeq(target, nums, dp);
   }

   int subSeq(int target, vector<int> &nums, vector<int> &dp)
   {
      if (target == 0)
      {
         return 1;
      }
      if (target < 0)
      {
         return 0;
      }
      if (dp[target] != -1)
      {
         return dp[target];
      }
      int count = 0;
      for (auto i : nums)
         count += subSeq(target - i, nums, dp);
      return dp[target] = count;
   }
};