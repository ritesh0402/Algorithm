class Solution
{
public:
   bool canPartition(vector<int> &nums)
   {
      int totsum = 0;
      for (int &x : nums)
         totsum += x;
      if (totsum % 2 != 0)
         return false;
      vector<vector<int>> dp(nums.size(), vector<int>((totsum / 2) + 1, -1));
      return subset(0, totsum / 2, nums, dp);
   }

   bool subset(int index, int sum, vector<int> &nums, vector<vector<int>> &dp)
   {
      if (sum == 0)
         return true;
      if (index == nums.size())
         return false;
      bool temp = false;
      if (dp[index][sum] != -1)
         return dp[index][sum];
      if (nums[index] <= sum)
      {
         temp = temp || subset(index + 1, sum - nums[index], nums, dp);
      }
      temp = temp || subset(index + 1, sum, nums, dp);
      return dp[index][sum] = temp;
   }
};