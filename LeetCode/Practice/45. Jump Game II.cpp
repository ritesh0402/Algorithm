// class Solution {
// public:
//     int jump(vector<int>& nums) {
//         vector<int> dp(nums.size()+1, -1);
//         return minJump(0, nums, dp);
//     }
//     long long int minJump(int index, vector<int>& nums, vector<int>& dp){
//         if(index == nums.size()-1) return 0;
//         if(index >= nums.size() || nums[index] == 0) return INT_MAX;

//         if(dp[index] != -1) return dp[index];

//         long long int tempJumps = INT_MAX;
//         for(int i=1; i<=nums[index]; i++){
//             tempJumps = min(tempJumps, 1+minJump(index+i, nums, dp));
//         }
//         return dp[index] = tempJumps;
//     }
// };

class Solution
{
public:
   int jump(vector<int> &nums)
   {
      vector<int> dp(nums.size(), INT_MAX);
      dp.back() = 0;
      for (int i = nums.size() - 2; i >= 0; i--)
      {
         for (int j = 1; j <= nums[i]; j++)
         {
            if (i + j >= nums.size())
               break;
            dp[i] = min(dp[i], dp[i + j]);
         }
         if (dp[i] != INT_MAX)
            dp[i] = 1 + dp[i];
      }

      return dp[0];
   }
};
