// class Solution
// {
// public:
//    int uniquePaths(int m, int n)
//    {
//       return subPath(m, n, 0, 0);
//    }

//    int subPath(int m, int n, int x, int y)
//    {
//       if (x == m - 1 && y == n - 1)
//          return 0;
//       else if (x == m - 1 || y == n - 1)
//          return 1;
//       else
//          return ((subPath(m, n, x + 1, y) + subPath(m, n, x, y + 1)));
//    }
// };

class Solution
{
public:
   int uniquePaths(int m, int n)
   {
      if (m == 1 && n == 1)
         return 1;
      unordered_map<string, int> dp;
      return subPath(m, n, 0, 0, dp);
   }

   int subPath(int m, int n, int x, int y, unordered_map<string, int> &dp)
   {
      if (x == m - 1 || y == n - 1)
         return 1;
      else if (x >= m || y >= n)
         return 0;
      string key = to_string(x) + "-" + to_string(y);
      if (dp.find(key) != dp.end())
      {
         return dp[key];
      }
      // cout << key << endl;
      return dp[key] = subPath(m, n, x + 1, y, dp) + subPath(m, n, x, y + 1, dp);
   }
};

class Solution
{
public:
   int uniquePaths(int m, int n)
   {
      if (m == 1 && n == 1)
         return 1;
      vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
      return subPath(m, n, 0, 0, dp);
   }

   int subPath(int m, int n, int x, int y, vector<vector<int>> &dp)
   {
      if (x == m - 1 || y == n - 1)
         return 1;
      if (x >= m || y >= n)
         return 0;
      if (dp[x][y] != -1)
      {
         return dp[x][y];
      }
      // cout << key << endl;
      return dp[x][y] = subPath(m, n, x + 1, y, dp) + subPath(m, n, x, y + 1, dp);
   }
};