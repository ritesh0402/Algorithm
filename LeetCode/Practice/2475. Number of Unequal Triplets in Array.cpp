// class Solution {
// public:
//     int unequalTriplets(vector<int>& nums) {
//         unordered_set<int> seq;
//         return subset(0, nums, seq);
//     }

//     int subset(int ind, vector<int> &nums, unordered_set<int> &seq)
//     {
//         if(seq.size()==3) return 1;
//         if (ind == nums.size()) return 0;
//         int ret=0;
//         if(seq.find(nums[ind]) == seq.end()){
//             seq.insert(nums[ind]);
//             ret+=subset(ind + 1, nums, seq);
//             seq.erase(nums[ind]);
//         }
//         ret+=subset(ind + 1, nums, seq);
//         return ret;
//     }
// };

class Solution
{
public:
   int unequalTriplets(vector<int> &nums)
   {
      unordered_set<int> seq;
      unordered_map<string, int> dp;
      return subset(0, nums, seq, dp);
   }

   int subset(int ind, vector<int> &nums, unordered_set<int> &seq, unordered_map<string, int> &dp)
   {
      if (seq.size() == 3)
         return 1;
      if (ind == nums.size())
         return 0;

      string key = "";
      for (auto &x : seq)
      {
         key += "_" + to_string(x);
      }
      if (dp.find(key) != dp.end())
         return dp[key];
      bool temp = dp.find(key) != dp.end();
      cout << key << " " << temp << endl;
      int ret = 0;
      if (seq.find(nums[ind]) == seq.end())
      {
         seq.insert(nums[ind]);
         ret += subset(ind + 1, nums, seq, dp);
         seq.erase(nums[ind]);
      }
      ret += subset(ind + 1, nums, seq, dp);
      return dp[key] = ret;
   }
};
