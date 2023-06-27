class Solution
{
public:
   int minimumAverageDifference(vector<int> &nums)
   {
      int minAvg = INT_MAX;
      long long sum1 = 0, sum2 = 0;
      int ans = 0;
      int n = nums.size();
      if (n == 1)
         return 0;
      for (int i = 0; i < n; i++)
         sum2 += nums[i];
      for (int i = 0; i < n; i++)
      {
         sum1 += nums[i];
         sum2 -= nums[i];
         int avg = 0;
         if (i == n - 1)
         {
            avg = sum1 / n;
         }
         else
         {
            avg = abs((sum1 / (i + 1)) - (sum2 / (n - i - 1)));
         }
         if (avg < minAvg)
         {
            minAvg = avg;
            ans = i;
         }
      }
      return ans;
   }
};