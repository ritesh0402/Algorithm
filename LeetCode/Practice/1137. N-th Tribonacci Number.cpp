class Solution
{
public:
   int tribonacci(int n)
   {
      long long t1 = 0, t2 = 1, t3 = 1, t4 = 0;
      for (int i = 0; i < n; i++)
      {
         t4 = t3 + t2 + t1;
         t1 = t2;
         t2 = t3;
         t3 = t4;
      }
      return t1;
   }
};