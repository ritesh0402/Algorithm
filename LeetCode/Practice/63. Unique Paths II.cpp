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

class Solution
{
public:
   int uniquePathsWithObstacles(vector<vector<int>> &grid)
   {
      int n = grid.size(), m = grid[0].size();
      // vector<vector<int>> dp(n, vector<int>(m, -1));
      // return memo(n-1, m-1, grid, dp);
      return tabu(grid);
   }

   int memo(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
   {
      if (i < 0 || j < 0)
         return 0;
      if (grid[i][j] == 1)
         return 0;
      if (i == 0 && j == 0)
         return 1;
      if (dp[i][j] != -1)
         return dp[i][j];
      return dp[i][j] = memo(i - 1, j, grid, dp) + memo(i, j - 1, grid, dp);
   }

   int tabu(vector<vector<int>> &grid)
   {
      int n = grid.size(), m = grid[0].size();
      vector<vector<int>> dp(n, vector<int>(m));

      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            if (grid[i][j] == 1)
            {
               dp[i][j] = 0;
            }
            else if (i == 0 && j == 0)
            {
               dp[i][j] = 1;
            }
            else
            {
               int up = 0, left = 0;
               if (i > 0)
                  up = dp[i - 1][j];
               if (j > 0)
                  left = dp[i][j - 1];
               dp[i][j] = up + left;
            }
         }
      }

      return dp[n - 1][m - 1];
   }
};