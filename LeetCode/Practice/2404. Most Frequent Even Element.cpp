class Solution
{
public:
   int mostFrequentEven(vector<int> &nums)
   {
      unordered_map<int, int> ump;
      int maxcnt = 0, ans = -1;
      for (int &x : nums)
      {
         if (x % 2 == 0)
         {
            ump[x]++;
         }
      }
      for (auto &y : ump)
      {
         if (y.second > maxcnt)
         {
            ans = y.first;
            maxcnt = y.second;
         }
         else if (y.second == maxcnt)
         {
            ans = min(ans, y.first);
         }
      }
      return ans;
   }
};