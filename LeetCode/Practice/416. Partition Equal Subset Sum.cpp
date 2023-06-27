// class Solution {
// public:
//     bool canPartition(vector<int>& nums) {
//         int totsum=0;
//         for(int &x: nums) totsum+=x;
//         if(totsum%2 != 0) return false;
//         vector<vector<int>> dp(nums.size(), vector<int>((totsum/2)+1, -1));
//         return subset(0, totsum/2, nums, dp);
//     }

//     bool subset(int index, int sum, vector<int>& nums, vector<vector<int>>& dp){
//         if(sum == 0) return true;
//         if(index == nums.size()) return false;
//         bool temp = false;
//         if(dp[index][sum] != -1) return dp[index][sum];
//         if(nums[index] <= sum){
//             temp = temp || subset(index+1, sum-nums[index], nums, dp);
//         }
//         temp = temp || subset(index+1, sum, nums, dp);
//         return dp[index][sum] = temp;
//     }
// };

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
      int target = totsum / 2;
      vector<vector<bool>> dp(nums.size(), vector<bool>(target + 1, false));

      for (int i = 0; i < nums.size(); i++)
         dp[i][0] = true;
      for (int i = 1; i < nums.size(); i++)
      {
         for (int sum = 1; sum <= target; sum++)
         {
            bool take = false;
            if (nums[i] <= sum)
            {
               take = dp[i - 1][sum - nums[i]];
            }
            bool notTake = dp[i - 1][sum];
            dp[i][sum] = take || notTake;
         }
      }
      return dp[nums.size() - 1][target];
   }
};