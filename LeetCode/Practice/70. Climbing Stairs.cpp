class Solution
{
public:
   int climbStairs(int n)
   {
      vector<int> dp(n + 1, -1);
      return steps(n, dp);
   }
   int steps(int n, vector<int> &dp)
   {
      if (n == 0)
      {
         return 1;
      }
      if (dp[n] != -1)
         return dp[n];
      int l = steps(n - 1, dp);
      int r = 0;
      if (n != 1)
         r = steps(n - 2, dp);
      return dp[n] = l + r;
   }
};