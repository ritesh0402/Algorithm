class Solution
{
public:
   int orangesRotting(vector<vector<int>> &grid)
   {
      int m = grid.size();
      int n = grid[0].size();
      vector<vector<int>> visited = grid;

      queue<pair<int, int>> q;
      int countFreshOrange = 0;
      for (int i = 0; i < m; i++)
      {
         for (int j = 0; j < n; j++)
         {
            if (visited[i][j] == 2)
            {
               q.push({i, j});
            }
            if (visited[i][j] == 1)
            {
               countFreshOrange++;
            }
         }
      }
      if (countFreshOrange == 0)
         return 0;
      if (q.empty())
         return -1;

      int minutes = -1;
      vector<pair<int, int>> dirs = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
      while (!q.empty())
      {
         int size = q.size();
         while (size--)
         {
            auto [x, y] = q.front();
            q.pop();
            for (auto [dx, dy] : dirs)
            {
               int i = x + dx;
               int j = y + dy;
               if (i >= 0 && i < m && j >= 0 && j < n && visited[i][j] == 1)
               {
                  visited[i][j] = 2;
                  countFreshOrange--;
                  q.push({i, j});
               }
            }
         }
         minutes++;
      }

      if (countFreshOrange == 0)
         return minutes;
      return -1;
   }
};

///////////////////////////////////////////

class Solution
{
public:
   int orangesRotting(vector<vector<int>> &grid)
   {
      int n = grid.size(), m = grid[0].size();
      int fresh = 0;
      queue<pair<int, int>> q;
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            if (grid[i][j] == 2)
               q.push({i, j});
            else if (grid[i][j] == 1)
               fresh++;
         }
      }

      int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0};
      int size, ans = 0;
      pair<int, int> cell;
      while (!q.empty() && fresh > 0)
      {
         size = q.size();
         ans++;
         for (int i = 0; i < size; i++)
         {
            cell = q.front();
            q.pop();
            for (int d = 0; d < 4; d++)
            {
               int x = cell.first + dx[d];
               int y = cell.second + dy[d];
               if (x >= 0 && y >= 0 && x < n && y < m && grid[x][y] == 1)
               {
                  q.push({x, y});
                  grid[x][y] = 2;
                  fresh--;
               }
            }
         }
      }
      return fresh == 0 ? ans : -1;
   }
};