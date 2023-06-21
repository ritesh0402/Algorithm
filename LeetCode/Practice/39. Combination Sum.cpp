class Solution
{
public:
   vector<vector<int>> combinationSum(vector<int> &candidates, int target)
   {
      vector<vector<int>> ans;
      vector<int> seq;
      subSeq(0, target, seq, candidates, ans);
      return ans;
   }
   void subSeq(int index, int target, vector<int> &seq, vector<int> &candidates, vector<vector<int>> &ans)
   {
      if (target == 0)
      {
         ans.push_back(seq);
         return;
      }
      if (index == candidates.size())
      {
         return;
      }
      if (candidates[index] <= target)
      {
         seq.push_back(candidates[index]);
         subSeq(index, target - candidates[index], seq, candidates, ans);
         seq.pop_back();
      }
      subSeq(index + 1, target, seq, candidates, ans);
   }
};