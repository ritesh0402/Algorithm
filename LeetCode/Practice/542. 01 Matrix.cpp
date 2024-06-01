class Solution
{
public:
   vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
   {
      int n = mat.size(), m = mat[0].size();
      vector<vector<int>> ans(n, vector<int>(m));
      vector<vector<bool>> vis(n, vector<bool>(m));
      queue<pair<int, pair<int, int>>> q;

      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            if (mat[i][j] == 0)
            {
               ans[i][j] = 0;
               vis[i][j] = true;
               q.push({0, {i, j}});
            }
         }
      }
      int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
      while (!q.empty())
      {
         int i = q.front().second.first;
         int j = q.front().second.second;
         int dist = q.front().first + 1;
         q.pop();
         for (int k = 0; k < 4; k++)
         {
            int x = i + dx[k];
            int y = j + dy[k];
            if (x >= 0 && y >= 0 && x < n && y < m && !vis[x][y] && mat[x][y] == 1)
            {
               ans[x][y] = dist;
               vis[x][y] = true;
               q.push({dist, {x, y}});
            }
         }
      }
      return ans;
   }
};

class Solution
{
public:
   vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
   {
      if (mat.empty())
         return {};
      int m = mat.size(), n = mat[0].size();
      vector<vector<int>> dp(m, vector<int>(n, INT_MAX - 1));

      for (int i = 0; i < m; ++i)
      {
         for (int j = 0; j < n; ++j)
         {
            if (mat[i][j] == 0)
            {
               dp[i][j] = 0;
            }
            else
            {
               if (i > 0)
               {
                  dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
               }
               if (j > 0)
               {
                  dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
               }
            }
         }
      }

      for (int i = m - 1; i >= 0; --i)
      {
         for (int j = n - 1; j >= 0; --j)
         {
            if (mat[i][j] != 0)
            {
               if (i < m - 1)
               {
                  dp[i][j] = min(dp[i][j], dp[i + 1][j] + 1);
               }
               if (j < n - 1)
               {
                  dp[i][j] = min(dp[i][j], dp[i][j + 1] + 1);
               }
            }
         }
      }
      return dp;
   }
};