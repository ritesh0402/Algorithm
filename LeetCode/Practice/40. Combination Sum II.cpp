// class Solution {
// public:
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         vector<int> seq;
//         sort(candidates.begin(), candidates.end());
//         subSeq(0, target, seq, candidates, ans);
//         return ans;
//     }
//     void subSeq(int index, int target, vector<int>& seq, vector<int>& candidates, vector<vector<int>> &ans){
//         if(index == candidates.size()){
//             if(target == 0){
//                 ans.push_back(seq);
//             }
//             return;
//         }
//         if(candidates[index] <= target){
//             seq.push_back(candidates[index]);
//             subSeq(index+1, target-candidates[index], seq, candidates, ans);
//             seq.pop_back();
//         }
//         while(index+1<candidates.size() && candidates[index+1]==candidates[index])index++;
//         subSeq(index+1, target, seq, candidates, ans);

//     }
// };

class Solution
{
public:
   vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
   {
      vector<vector<int>> ans;
      vector<int> seq;
      sort(candidates.begin(), candidates.end());
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
      for (int i = index; i < candidates.size(); i++)
      {
         if (i > index && candidates[i] == candidates[i - 1])
            continue;
         if (candidates[i] > target)
            break;
         seq.push_back(candidates[i]);
         subSeq(i + 1, target - candidates[i], seq, candidates, ans);
         seq.pop_back();
         // subSeq(index+1, target, seq, candidates, ans);
      }
   }
};
