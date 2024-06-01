class Solution
{
public:
   int beautifulSubsets(vector<int> &nums, int k)
   {
      unordered_map<int, int> freq;
      sort(nums.begin(), nums.end());
      return helper(0, k, freq, nums) - 1;
   }

   int helper(int ind, int k, unordered_map<int, int> &freq, vector<int> &nums)
   {
      if (ind == nums.size())
      {
         return 1;
      }
      int ans = helper(ind + 1, k, freq, nums);
      if (!freq[nums[ind] - k])
      {
         freq[nums[ind]]++;
         ans += helper(ind + 1, k, freq, nums);
         freq[nums[ind]]--;
      }
      return ans;
   }
};