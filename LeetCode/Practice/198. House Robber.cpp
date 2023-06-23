// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         vector<int> dp(nums.size(), -1);
//         return maxSum(0, dp, nums);
//     }

//     int maxSum(int index, vector<int>& dp, vector<int>& nums){
//         if(index >= nums.size()) return 0;
//         if(dp[index] != -1) return dp[index];

//         int first = maxSum(index+1, dp, nums);
//         int second = 0;
//         if(index <= nums.size()) second = maxSum(index+2, dp, nums) + nums[index];

//         return dp[index] = max(first, second);
//     }
// };

class Solution
{
public:
   int rob(vector<int> &nums)
   {
      vector<int> dp(nums.size(), 0);
      dp.back() = nums.back();
      for (int i = nums.size() - 2; i >= 0; i--)
      {
         int first = max(nums[i], dp[i + 1]);
         int second = 0;
         if (i < nums.size() - 2)
            second = dp[i + 2] + nums[i];
         dp[i] = max(first, second);
      }

      return dp[0];
   }
};