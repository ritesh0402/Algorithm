class Solution
{
public:
   vector<vector<string>> solveNQueens(int n)
   {
      vector<vector<string>> ans;
      vector<string> board(n, string(n, '.'));
      vector<int> west(n, 0), nw(n * 2 - 1, 0), sw(n * 2 - 1, 0);
      solve(0, n, west, nw, sw, board, ans);
      return ans;
   }

   void solve(int col, int n, vector<int> &west, vector<int> &nw, vector<int> &sw, vector<string> &board, vector<vector<string>> &ans)
   {
      if (col == n)
      {
         ans.push_back(board);
         return;
      }

      for (int row = 0; row < n; row++)
      {
         if (west[row] == 0 && nw[n - 1 - row + col] == 0 && sw[row + col] == 0)
         {
            west[row] = 1;
            nw[n - 1 - row + col] = 1;
            sw[row + col] = 1;
            board[row][col] = 'Q';
            solve(col + 1, n, west, nw, sw, board, ans);
            west[row] = 0;
            nw[n - 1 - row + col] = 0;
            sw[row + col] = 0;
            board[row][col] = '.';
         }
      }
   }
};

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
}
;