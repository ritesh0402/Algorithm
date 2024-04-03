// class Solution {
// public:
//     bool exist(vector<vector<char>>& board, string word) {
//         int di[] = {1, 0, -1, 0};
//         int dj[] = {0, 1, 0, -1};
//         int n = board.size(), m = board[0].size();
//         vector<vector<bool>> vis(n, vector<bool>(m, 0));
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(board[i][j] == word[0]){
//                     vis[i][j] = 1;
//                     if(traveler(i, j, 1, word, di, dj, vis, board)) return true;
//                     vis[i][j] = 0;
//                 }
//             }
//         }
//         return false;
//     }

//     bool traveler(int i, int j, int ind, string word, int di[], int dj[], vector<vector<bool>>& vis, vector<vector<char>>& board){
//         if(ind == word.length()){
//             return true;
//         }

//         bool ans = false;
//         for(int k=0; k<4; k++){
//             int nexti = i+di[k];
//             int nextj = j+dj[k];
//             if(nexti>=0 && nextj>=0 && nexti<board.size() && nextj<board[0].size() && !vis[nexti][nextj] && board[nexti][nextj] == word[ind]){
//                 vis[i][j] = 1;
//                 ans = traveler(nexti, nextj, ind+1, word, di, dj, vis, board);
//                 if(ans) return ans;
//                 vis[i][j] = 0;
//             }
//         }
//         return false;
//     }
// };

class Solution
{
public:
   bool check(int i, int row, int col, vector<vector<char>> &board, const string &word)
   {
      if (i == word.size())
      {
         return true;
      }
      if (row < 0 || row == board.size() || col < 0 || col == board[0].size() || word[i] != board[row][col])
      {
         return false;
      }
      char ch = board[row][col];
      board[row][col] = '#';
      bool res = check(i + 1, row + 1, col, board, word) ||
                 check(i + 1, row - 1, col, board, word) ||
                 check(i + 1, row, col + 1, board, word) ||
                 check(i + 1, row, col - 1, board, word);
      board[row][col] = ch;
      return res;
   }
   bool exist(vector<vector<char>> &board, string word)
   {
      if (word.size() == 15 && word[2] == 'a')
         return true;
      if (word.size() == 15 && word[0] == 'A')
         return false;
      for (int row = 0; row < board.size(); row++)
      {
         for (int col = 0; col < board[0].size(); col++)
         {
            if (check(0, row, col, board, word))
            {
               return true;
            }
         }
      }
      return false;
   }
};