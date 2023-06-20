class Solution
{
public:
   vector<vector<int>> subsets(vector<int> &nums)
   {
      vector<vector<int>> ans;
      vector<int> seq;
      subseq(0, nums, seq, ans);
      return ans;
   }
   void subseq(int ind, vector<int> &nums, vector<int> &seq, vector<vector<int>> &ans)
   {
      if (ind == nums.size())
      {
         ans.push_back(seq);
         return;
      }
      subseq(ind + 1, nums, seq, ans);
      seq.push_back(nums[ind]);
      subseq(ind + 1, nums, seq, ans);
      seq.pop_back();
   }
};