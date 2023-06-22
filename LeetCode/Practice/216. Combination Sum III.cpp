class Solution
{
public:
   vector<vector<int>> combinationSum3(int k, int n)
   {
      vector<vector<int>> ans;
      if (n > 45)
         return ans;
      vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
      vector<int> seq;
      subSeq(0, k, n, nums, seq, ans);
      return ans;
   }
   void subSeq(int index, int k, int n, vector<int> &nums, vector<int> &seq, vector<vector<int>> &ans)
   {
      if (k == 0)
      {
         if (n == 0)
         {
            ans.push_back(seq);
         }
         return;
      }
      if (n < 0 || index == nums.size())
         return;
      seq.push_back(nums[index]);
      subSeq(index + 1, k - 1, n - nums[index], nums, seq, ans);
      seq.pop_back();
      subSeq(index + 1, k, n, nums, seq, ans);
   }
};