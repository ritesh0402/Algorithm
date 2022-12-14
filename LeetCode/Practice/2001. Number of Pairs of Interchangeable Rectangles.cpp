class Solution
{
public:
   long long interchangeableRectangles(vector<vector<int>> &rectangles)
   {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);
      long long count = 0;
      long long mid = 0;
      double d = 0;
      unordered_map<double, int> mp;
      for (auto &x : rectangles)
      {
         d = (x[0] / 1.0) / (x[1] / 1.0);
         // cout << d << endl;
         mp[d]++;
      }

      for (auto &x : mp)
      {
         if (x.second != 1)
         {
            mid = x.second;
            count += mid * (mid - 1) / 2;
         }
      }
      return count;
   }
};