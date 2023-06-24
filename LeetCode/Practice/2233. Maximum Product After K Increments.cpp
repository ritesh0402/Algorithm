class Solution
{
public:
   int maximumProduct(vector<int> &nums, int k)
   {
      int mod = pow(10, 9) + 7;
      priority_queue<int, vector<int>, greater<int>> min_heap(nums.begin(), nums.end());
      while (k > 0)
      {
         int x = min_heap.top();
         min_heap.pop();
         x += 1;
         min_heap.push(x);
         k--;
      }
      long long int ans = 1;
      while (min_heap.size())
      {
         int temp = min_heap.top();
         min_heap.pop();
         ans = (ans * temp) % mod;
      }
      return ans;
   }
};