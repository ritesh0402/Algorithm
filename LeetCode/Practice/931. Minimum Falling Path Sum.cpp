// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int minj = INT_MAX;
//         for(int j=0; j<matrix.size(); j++){
//             minj = min(minj, minPath(0, j, matrix) );
//         }
//         return minj;
//     }

//     int minPath(int i, int j, vector<vector<int>>& matrix){
//         if(j >= matrix.size()) return INT_MAX;
//         if(i == matrix.size()-1) return matrix[i][j];

//         int minj = INT_MAX;
//         if(j>=0) minj = min(minj, minPath(i+1, j-1, matrix));
//         if(j<matrix.size()) minj = min(minj, minPath(i+1, j, matrix));
//         if(j<matrix.size()-1) minj = min(minj, minPath(i+1, j+1, matrix));

//         return minj + matrix[i][j];
//     }
// };

// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int minj = INT_MAX;
//         int n = matrix.size();
//         vector<vector<int>> dp(n, vector<int>(n, -1));
//         for(int j=0; j<n; j++){
//             minj = min(minj, minPath(0, j, matrix, dp) );
//         }
//         return minj;
//     }

//     int minPath(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>& dp){
//         if(j<0 || j > matrix.size()-1) return 1e9;
//         if(i == matrix.size()-1) return matrix[i][j];

//         if(dp[i][j] != -1) return dp[i][j];

//         int minj = INT_MAX;
//         minj = min(minj, minPath(i+1, j-1, matrix, dp));
//         minj = min(minj, minPath(i+1, j, matrix, dp));
//         minj = min(minj, minPath(i+1, j+1, matrix, dp));

//         return dp[i][j] = minj + matrix[i][j];
//     }
// };

class Solution
{
public:
   int minFallingPathSum(vector<vector<int>> &matrix)
   {
      int n = matrix.size();
      for (int i = 1; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            int s = matrix[i - 1][j];
            if (j - 1 >= 0)
               s = min(s, matrix[i - 1][j - 1]);
            if (j + 1 < n)
               s = min(s, matrix[i - 1][j + 1]);
            matrix[i][j] += s;
         }
      }
      int ans = INT_MAX;
      for (int j = 0; j < n; j++)
      {
         ans = min(ans, matrix[n - 1][j]);
      }
      return ans;
   }
};