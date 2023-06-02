class Solution
{
public:
   int uniquePaths(int m, int n)
   {
      return subPath(m, n, 0, 0);
   }

   int subPath(int m, int n, int x, int y)
   {
      if (x == m - 1 && y == n - 1)
         return 0;
      else if (x == m - 1 || y == n - 1)
         return 1;
      else
         return ((subPath(m, n, x + 1, y) + subPath(m, n, x, y + 1)));
   }
};