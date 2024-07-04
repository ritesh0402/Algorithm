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

class Solution
{
public:
   int uniquePaths(int n, int m)
   {
      // vector<vector<int>> dp(n, vector<int>(m, -1));
      // return memo(n-1, m-1, dp);
      return tabu(n, m);
   }

   int memo(int n, int m, vector<vector<int>> &dp)
   {
      if (n < 0 || m < 0)
         return 0;
      if (n == 0 || m == 0)
         return 1;

      if (dp[n][m] != -1)
         return dp[n][m];
      return dp[n][m] = memo(n, m - 1, dp) + memo(n - 1, m, dp);
   }

   int tabu(int n, int m)
   {
      vector<vector<int>> dp(n, vector<int>(m, 1));
      for (int i = 1; i < n; i++)
      {
         for (int j = 1; j < m; j++)
         {
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
         }
      }

      return dp[n - 1][m - 1];
   }
};