class Solution
{
public:
   vector<int> answerQueries(vector<int> &nums, vector<int> &que)
   {
      sort(nums.begin(), nums.end());
      vector<int> ans;
      int sum = 0;
      for (int i = 0; i < nums.size(); i++)
      {
         sum += nums[i];
         nums[i] = sum;
      }
      for (auto it : que)
      {
         ans.push_back(upper_bound(nums.begin(), nums.end(), it) - nums.begin());
      }
      return ans;
   }
};
