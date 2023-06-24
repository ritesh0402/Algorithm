// class Solution {
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), -1) );
//         return minPath(0, 0, triangle, dp);
//     }

//     int minPath(int i, int j, vector<vector<int>>& triangle, vector<vector<int>>& dp){
//         if(i == triangle.size()-1) return triangle[i][j];

//         if(dp[i][j] != -1) return dp[i][j];

//         int first = minPath(i+1, j, triangle, dp);
//         int second =  minPath(i+1, j+1, triangle, dp);

//         return dp[i][j] = triangle[i][j] + min(first, second);
//     }
// };

// class Solution {
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int n = triangle.size();
//         vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), -1) );
//         for(int i=0;i<n;i++) dp[n-1][i]=triangle[n-1][i];
//         for(int i=n-2; i>=0; i--){
//             for(int j=i; j>=0; j--){
//                 dp[i][j] = triangle[i][j] + min(dp[i+1][j], dp[i+1][j+1]);
//             }
//         }
//         return dp[0][0];
//     }
// };

class Solution
{
public:
   int minimumTotal(vector<vector<int>> &triangle)
   {
      int n = triangle.size();
      vector<int> front(n, -1), curr(n, -1);
      for (int i = 0; i < n; i++)
         front[i] = triangle[n - 1][i];
      for (int i = n - 2; i >= 0; i--)
      {
         for (int j = i; j >= 0; j--)
         {
            curr[j] = triangle[i][j] + min(front[j], front[j + 1]);
         }
         front = curr;
      }
      return front[0];
   }
};