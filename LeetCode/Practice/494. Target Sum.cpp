// class Solution
// {
// public:
//    int findTargetSumWays(vector<int> &nums, int target)
//    {
//       vector<vector<int>> ans;
//       return subSeq(0, target, nums);
//    }
//    int subSeq(int index, int target, vector<int> &nums)
//    {
//       if (index == nums.size())
//       {
//          if (target == 0)
//          {
//             return 1;
//          }
//          return 0;
//       }
//       return subSeq(index + 1, target - nums[index], nums) + subSeq(index + 1, target + nums[index], nums);
//    }
// };

class Solution
{
public:
   int findTargetSumWays(vector<int> &nums, int target)
   {
      vector<vector<int>> ans;
      unordered_map<string, int> memo;
      return subSeq(0, target, nums, memo);
   }
   int subSeq(int index, int target, vector<int> &nums, unordered_map<string, int> &memo)
   {
      if (index == nums.size())
      {
         if (target == 0)
         {
            return 1;
         }
         return 0;
      }
      string key = to_string(index) + "-" + to_string(target);
      if (memo.count(key))
         return memo[key];

      return memo[key] = subSeq(index + 1, target - nums[index], nums, memo) + subSeq(index + 1, target + nums[index], nums, memo);
   }
};