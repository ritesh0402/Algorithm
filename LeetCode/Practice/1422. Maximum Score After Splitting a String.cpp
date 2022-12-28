class Solution
{
public:
   int maxScore(string s)
   {
      int sum = 0;
      int n = s.length();
      int zeros = 0;
      int ones = 0;
      int max1 = -n;

      for (int i = 0; i < n; i++)
      {

         if (s[i] == '0')
         {
            zeros++;
         }
         else
         {
            ones++;
            sum++;
         }

         if (i < n - 1)
         {
            max1 = max(max1, zeros - ones);
         }
      }

      return max1 + sum;
   }
};