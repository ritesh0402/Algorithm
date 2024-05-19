// class Solution {
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         if(image[sr][sc] == color) return image;
//         int n = image.size();
//         int m = image[0].size();
//         int islands = 0;
//         dfs(sr, sc, image[sr][sc], color, n, m, image);
//         return image;
//     }

//     void dfs(int i, int j, int icolor,  int newColor, int n, int m, vector<vector<int>>& image){
//         image[i][j] = newColor;
//         //up
//         if(i>0 && image[i-1][j] == icolor) dfs(i-1, j, icolor, newColor, n, m, image);
//         //right
//         if(j<m-1 && image[i][j+1] == icolor) dfs(i, j+1, icolor, newColor, n, m, image);
//         //down
//         if(i<n-1 && image[i+1][j] == icolor) dfs(i+1, j, icolor, newColor, n, m, image);
//         //left
//         if(j>0 && image[i][j-1] == icolor) dfs(i, j-1, icolor, newColor, n, m, image);
//     }
// };

class Solution
{
public:
   vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
   {
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
      cout.tie();

      int ROW = image.size();
      int COL = image[0].size();
      int oldColor = image[sr][sc];
      if (oldColor == newColor)
         return image;

      vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
      queue<pair<int, int>> q;
      q.push({sr, sc});
      image[sr][sc] = newColor;

      while (!q.empty())
      {
         int cr = q.front().first;
         int cc = q.front().second;
         q.pop();

         for (const auto &[dr, dc] : directions)
         {
            int nr = cr + dr;
            int nc = cc + dc;
            if (nr >= 0 && nr < ROW && nc >= 0 && nc < COL && image[nr][nc] == oldColor)
            {
               q.push({nr, nc});
               image[nr][nc] = newColor;
            }
         }
      }

      return image;
   }
};

class Solution
{
public:
   vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
   {
      if (image[sr][sc] == color)
         return image;
      int n = image.size(), m = image[0].size();
      dfs(sr, sc, image[sr][sc], color, image);
      return image;
   }

   void dfs(int i, int j, int baseColor, int color, vector<vector<int>> &image)
   {
      if (image[i][j] != baseColor)
         return;
      image[i][j] = color;

      if (i > 0 && image[i - 1][j] == baseColor)
         dfs(i - 1, j, baseColor, color, image);
      if (i < image.size() - 1 && image[i + 1][j] == baseColor)
         dfs(i + 1, j, baseColor, color, image);
      if (j > 0 && image[i][j - 1] == baseColor)
         dfs(i, j - 1, baseColor, color, image);
      if (j < image[0].size() - 1 && image[i][j + 1] == baseColor)
         dfs(i, j + 1, baseColor, color, image);
   }
};