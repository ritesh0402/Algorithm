class Solution
{
public:
   void swap(vector<int> &nums)
   {
      int n = nums.size();
      for (int i = 0; i < n; i += 2)
      {
         nums.insert(nums.begin() + i, nums[(n / 2) + i]);
         nums[i + 1] *= -1;
      }
      nums.erase(nums.end() - ((n + 1) / 2), nums.end());
   }
   vector<int> sortEvenOdd(vector<int> &nums)
   {
      for (int i = 1; i < nums.size(); i += 2)
      {
         nums[i] *= -1;
      }
      sort(nums.begin(), nums.end());
      swap(nums);
      return nums;
   }
};