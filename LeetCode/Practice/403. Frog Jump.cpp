class Solution
{
public:
   bool canCross(vector<int> &stones)
   {
      unordered_map<string, int> dp;
      return jmp(0, 1, 0, stones, dp);
   }

   bool jmp(int index, int prevJmp, int prevIndex, vector<int> &stones, unordered_map<string, int> &dp)
   {
      if (index == stones.size() - 1)
         return true;
      if (prevJmp + 1 < stones[index] - stones[prevIndex])
         return false;
      string key = to_string(index) + "_" + to_string(prevJmp);

      if (dp.find(key) != dp.end())
      {
         return dp[key];
      }
      bool canJmp = false;
      prevJmp = stones[index] - stones[prevIndex];
      prevIndex = index;
      index++;

      while (index < stones.size() && prevJmp + 1 >= stones[index] - stones[prevIndex])
      {
         if (prevJmp - 1 == stones[index] - stones[prevIndex] || prevJmp == stones[index] - stones[prevIndex] || prevJmp + 1 == stones[index] - stones[prevIndex])
         {
            canJmp = canJmp || jmp(index, stones[index] - stones[prevIndex], prevIndex, stones, dp);
         }
         index++;
      }
      return dp[key] = canJmp;
   }
};