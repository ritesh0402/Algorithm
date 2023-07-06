class Solution
{
public:
   vector<vector<string>> solveNQueens(int n)
   {
      vector<vector<string>> ans;
      vector<string> board(n, string(n, '.'));
      vector<int> west(n, 0);
      vector<int> northWest((2 * n) - 1, 0);
      vector<int> southWest((2 * n) - 1, 0);
      placeQueen(0, n, board, ans, west, northWest, southWest);
      return ans;
   }

   void placeQueen(int col, int n, vector<string> &board, vector<vector<string>> &ans, vector<int> &west, vector<int> &northWest, vector<int> &southWest)
   {
      if (col == n)
      {
         ans.push_back(board);
         return;
      }
      for (int row = 0; row < n; row++)
      {
         if (west[row] == 0 && northWest[n - 1 + col - row] == 0 && southWest[col + row] == 0)
         {
            board[row][col] = 'Q';
            west[row] = 1;
            northWest[n - 1 + col - row] = 1;
            southWest[col + row] = 1;
            placeQueen(col + 1, n, board, ans, west, northWest, southWest);
            board[row][col] = '.';
            west[row] = 0;
            northWest[n - 1 + col - row] = 0;
            southWest[col + row] = 0;
         }
      }
   }

   // bool isSafe(int row, int col, int n, vector<string>& board){
   //     int rowCpy = row, colCpy = col;
   //     while(rowCpy>=0 && colCpy>=0){
   //         if(board[rowCpy][colCpy] == 'Q') return false;
   //         row--;
   //         col--;
   //     }

   //     rowCpy = row;
   //     colCpy = col;
   //     while(colCpy>=0){
   //         if(board[rowCpy][colCpy] == 'Q') return false;
   //         col--;
   //     }

   //     rowCpy = row;
   //     colCpy = col;
   //     while(rowCpy<n && colCpy>=0){
   //         if(board[rowCpy][colCpy] == 'Q') return false;
   //         row++;
   //         col--;
   //     }
   //     return true;
   // }
};