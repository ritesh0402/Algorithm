class Solution
{
public:
   int minOperations(string s)
   {
      int flips = 0, n = s.length();
      for (int i = 0; i < n; i++)
      {
         if (i % 2 != s[i] - '0')
            flips++;
      }
      cout << flips << endl;
      return min(flips, n - flips);
   }
};
