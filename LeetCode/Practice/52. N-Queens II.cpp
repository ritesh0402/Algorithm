class Solution
{
public:
   int totalNQueens(int n)
   {
      vector<string> board(n, string(n, '.'));
      vector<int> west(n, 0);
      vector<int> northWest((2 * n) - 1, 0);
      vector<int> southWest((2 * n) - 1, 0);
      return placeQueen(0, n, board, west, northWest, southWest);
   }

   int placeQueen(int col, int n, vector<string> &board, vector<int> &west, vector<int> &northWest, vector<int> &southWest)
   {
      if (col == n)
      {
         return 1;
      }
      int count = 0;
      for (int row = 0; row < n; row++)
      {
         if (west[row] == 0 && northWest[n - 1 + col - row] == 0 && southWest[col + row] == 0)
         {
            board[row][col] = 'Q';
            west[row] = 1;
            northWest[n - 1 + col - row] = 1;
            southWest[col + row] = 1;
            count += placeQueen(col + 1, n, board, west, northWest, southWest);
            board[row][col] = '.';
            west[row] = 0;
            northWest[n - 1 + col - row] = 0;
            southWest[col + row] = 0;
         }
      }
      return count;
   }
};
