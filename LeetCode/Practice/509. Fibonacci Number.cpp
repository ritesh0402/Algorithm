// class Solution {
// public:
//     int fib(int n) {
//         return fibonaci(n);
//     }

//     int fibonaci(int n){
//         if(n<=1) return n;
//         return fibonaci(n-1) + fibonaci(n-2);
//     }
// };

// class Solution {
// public:
//     int fib(int n) {
//         int dp[n+1] ;
//         memset(dp, -1, sizeof(dp));
//         return fibonaci(n, dp);
//     }

//     int fibonaci(int n, int dp[]){
//         if(n<=1) return n;
//         if(dp[n] != -1) return dp[n];
//         return dp[n] = fibonaci(n-1, dp) + fibonaci(n-2, dp);
//     }
// };

class Solution
{
public:
   int fib(int n)
   {
      if (n == 0)
         return 0;
      int prev2 = 0;
      int prev1 = 1;
      for (int i = 2; i <= n; i++)
      {
         int curr = prev2 + prev1;
         prev2 = prev1;
         prev1 = curr;
      }
      return prev1;
   }
};