class Solution
{
public:
   vector<int> intersection(vector<vector<int>> &nums)
   {
      vector<int> ans;
      map<int, int> ump;
      for (auto &x : nums)
      {
         for (int &y : x)
         {
            ump[y]++;
         }
      }
      for (auto &z : ump)
      {
         if (z.second == nums.size())
         {
            ans.push_back(z.first);
         }
      }
      return ans;
   }
};