class Solution
{
public:
   vector<vector<int>> combine(int n, int k)
   {
      vector<vector<int>> ans;
      vector<int> seq;
      vector<int> nums;
      for (int i = 1; i <= n; i++)
         nums.push_back(i);
      combi(0, k, seq, nums, ans);
      return ans;
   }

   void combi(int index, int k, vector<int> &seq, vector<int> &nums, vector<vector<int>> &ans)
   {
      if (seq.size() == k)
      {
         ans.push_back(seq);
         return;
      }
      if (index == nums.size())
         return;

      seq.push_back(nums[index]);
      combi(index + 1, k, seq, nums, ans);
      seq.pop_back();
      combi(index + 1, k, seq, nums, ans);
      return;
   }
};