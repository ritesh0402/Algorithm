class Solution
{
public:
   int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
   {
      int n = grid2.size(), m = grid2[0].size(), subIslands = 0;
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            if (grid2[i][j] == 1)
            {
               if (dfs(i, j, grid1, grid2))
               {
                  subIslands++;
               }
            }
         }
      }
      return subIslands;
   }

   int dfs(int i, int j, vector<vector<int>> &grid1, vector<vector<int>> &grid2)
   {
      bool flag = grid1[i][j] == grid2[i][j];
      grid2[i][j] = 0;

      if (i > 0 && grid2[i - 1][j] == 1)
         flag &= dfs(i - 1, j, grid1, grid2);
      if (i < grid2.size() - 1 && grid2[i + 1][j] == 1)
         flag &= dfs(i + 1, j, grid1, grid2);
      if (j > 0 && grid2[i][j - 1] == 1)
         flag &= dfs(i, j - 1, grid1, grid2);
      if (j < grid2[0].size() - 1 && grid2[i][j + 1] == 1)
         flag &= dfs(i, j + 1, grid1, grid2);
      return flag;
   }
};
