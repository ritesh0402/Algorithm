class Solution
{
public:
   int maxAreaOfIsland(vector<vector<int>> &grid)
   {
      int n = grid.size(), m = grid[0].size(), maxArea = 0;
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            if (grid[i][j] == 1)
            {
               maxArea = max(maxArea, dfs(i, j, grid));
            }
         }
      }
      return maxArea;
   }

   int dfs(int i, int j, vector<vector<int>> &grid)
   {
      grid[i][j] = 0;
      int area = 1;

      if (i > 0 && grid[i - 1][j] == 1)
         area += dfs(i - 1, j, grid);
      if (i < grid.size() - 1 && grid[i + 1][j] == 1)
         area += dfs(i + 1, j, grid);
      if (j > 0 && grid[i][j - 1] == 1)
         area += dfs(i, j - 1, grid);
      if (j < grid[0].size() - 1 && grid[i][j + 1] == 1)
         area += dfs(i, j + 1, grid);
      return area;
   }
};