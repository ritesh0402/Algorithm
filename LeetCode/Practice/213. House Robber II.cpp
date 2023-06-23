class Solution
{
public:
   int rob(vector<int> &nums)
   {
      if (nums.size() == 1)
         return nums[0];
      vector<int> arr1;
      vector<int> arr2;
      for (int i = 1; i < nums.size(); i++)
      {
         arr1.push_back(nums[i - 1]);
         arr2.push_back(nums[i]);
      }
      return max(houseRobber1(arr1), houseRobber1(arr2));
   }

   int houseRobber1(vector<int> &nums)
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