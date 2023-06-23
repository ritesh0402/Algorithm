class Solution
{
public:
   vector<vector<int>> findSubsequences(vector<int> &nums)
   {
      set<vector<int>> ans;
      vector<vector<int>> ret;
      vector<int> seq;
      subSeq(0, seq, nums, ans);
      for (auto it : ans)
         ret.push_back(it);
      return ret;
   }
   void subSeq(int index, vector<int> &seq, vector<int> &nums, set<vector<int>> &ans)
   {
      if (index == nums.size())
      {
         if (seq.size() > 1)
         {
            ans.insert(seq);
         }
         return;
      }

      if (seq.size() == 0 || seq.back() <= nums[index])
      {
         seq.push_back(nums[index]);
         subSeq(index + 1, seq, nums, ans);
         seq.pop_back();
      }
      subSeq(index + 1, seq, nums, ans);
   }
};