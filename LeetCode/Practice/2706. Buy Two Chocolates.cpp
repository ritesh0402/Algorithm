#pragma GCC target("avx,mmx,sse2,sse3,sse4")
auto _ = []() noexcept
{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0; }();
class Solution
{
public:
   int buyChoco(vector<int> &prices, int money)
   {
      int ans = INT_MAX;
      int min1 = INT_MAX, min2 = INT_MAX;
      for (int i = 0; i < prices.size(); i++)
      {
         if (prices[i] < min1)
         {
            min2 = min1;
            min1 = prices[i];
         }
         else if (prices[i] < min2)
         {
            min2 = prices[i];
         }
      }
      ans = min1 + min2;
      return ans <= money ? money - ans : money;
   }
};