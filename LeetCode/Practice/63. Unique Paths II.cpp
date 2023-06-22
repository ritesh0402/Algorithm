class Solution
{
public:
   int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
   {
      int m = obstacleGrid.size();
      int n = obstacleGrid[0].size();
      // if (m == 1 && n == 1)
      //     return 1;
      if (obstacleGrid[m - 1][n - 1] == 1)
         return 0;
      unordered_map<string, int> dp;
      return subPath(m, n, 0, 0, dp, obstacleGrid);
   }

   int subPath(int m, int n, int x, int y, unordered_map<string, int> &dp, vector<vector<int>> &obstacleGrid)
   {
      if (x >= m || y >= n)
         return 0;
      if (obstacleGrid[x][y] == 1)
         return 0;
      if (x == m - 1 && y == n - 1)
         return 1;
      string key = to_string(x) + "-" + to_string(y);
      if (dp.find(key) != dp.end())
      {
         return dp[key];
      }
      // cout << key << endl;
      return dp[key] = subPath(m, n, x + 1, y, dp, obstacleGrid) + subPath(m, n, x, y + 1, dp, obstacleGrid);
   }
};

class Solution
{
public:
   int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
   {
      int m = obstacleGrid.size();
      int n = obstacleGrid[0].size();
      // if (m == 1 && n == 1)
      //     return 1;
      if (obstacleGrid[m - 1][n - 1] == 1)
         return 0;
      unordered_map<string, int> dp;
      return subPath(m, n, 0, 0, dp, obstacleGrid);
   }

   int subPath(int m, int n, int x, int y, unordered_map<string, int> &dp, vector<vector<int>> &obstacleGrid)
   {
      if (x >= m || y >= n)
         return 0;
      if (obstacleGrid[x][y] == 1)
         return 0;
      if (x == m - 1 && y == n - 1)
         return 1;
      string key = to_string(x) + "-" + to_string(y);
      if (dp.find(key) != dp.end())
      {
         return dp[key];
      }
      if (x == m - 1)
         return dp[key] = subPath(m, n, x, y + 1, dp, obstacleGrid);
      else if (y == n - 1)
         return subPath(m, n, x + 1, y, dp, obstacleGrid);
      return dp[key] = subPath(m, n, x + 1, y, dp, obstacleGrid) + subPath(m, n, x, y + 1, dp, obstacleGrid);
   }
};