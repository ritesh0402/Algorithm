class Solution
{
public:
   vector<vector<int>> subsetsWithDup(vector<int> &nums)
   {
      sort(nums.begin(), nums.end());
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
      seq.push_back(nums[ind]);
      subseq(ind + 1, nums, seq, ans);
      seq.pop_back();
      while (ind + 1 < nums.size() && nums[ind + 1] == nums[ind])
         ind++;
      subseq(ind + 1, nums, seq, ans);
   }
};