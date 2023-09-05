class Solution
{
public:
   int LCS(int x, int y, string &a, string &b, vector<vector<int>> &dp)
   {
      if (x == a.length() || y == b.length())
         return 0;
      if (dp[x][y] != -1)
         return dp[x][y];
      if (a[x] == b[y])
         return dp[x][y] = 1 + LCS(x + 1, y + 1, a, b, dp);
      return dp[x][y] = max(LCS(x + 1, y, a, b, dp), LCS(x, y + 1, a, b, dp));
   }

   int longestPalindromeSubseq(string str)
   {
      int n = str.size();
      string rev = str;
      reverse(rev.begin(), rev.end());
      vector<vector<int>> dp(n, vector<int>(n, -1));
      return LCS(0, 0, str, rev, dp);
   }
};
