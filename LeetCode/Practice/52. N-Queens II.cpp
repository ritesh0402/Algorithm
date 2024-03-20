class Solution
{
public:
   int totalNQueens(int n)
   {
      vector<string> board(n, string(n, '.'));
      vector<int> west(n, 0), nw(n * 2 - 1, 0), sw(n * 2 - 1, 0);
      return solve(0, n, west, nw, sw, board);
   }

   int solve(int col, int n, vector<int> &west, vector<int> &nw, vector<int> &sw, vector<string> &board)
   {
      if (col == n)
      {
         return 1;
      }
      int temp = 0;
      for (int row = 0; row < n; row++)
      {
         if (west[row] == 0 && nw[n - 1 - row + col] == 0 && sw[row + col] == 0)
         {
            west[row] = 1;
            nw[n - 1 - row + col] = 1;
            sw[row + col] = 1;
            board[row][col] = 'Q';
            temp += solve(col + 1, n, west, nw, sw, board);
            west[row] = 0;
            nw[n - 1 - row + col] = 0;
            sw[row + col] = 0;
            board[row][col] = '.';
         }
      }
      return temp;
   }
};
