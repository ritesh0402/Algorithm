const static auto initialize = []
{
   std::ios::sync_with_stdio(false);
   std::cin.tie(nullptr);
   std::cout.tie(nullptr);
   return nullptr;
}();

class Solution
{
public:
   vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
   {
      priority_queue<pair<int, vector<int>>> pq;
      vector<vector<int>> ans;
      for (int &x : nums1)
      {
         for (int &y : nums2)
         {
            if (k > 0)
            {
               pq.push({x + y, {x, y}});
               k--;
            }
            else if (pq.top().first > x + y)
            {
               pq.pop();
               pq.push({x + y, {x, y}});
            }
            else
               break;
         }
      }

      while (!pq.empty())
      {
         ans.push_back(pq.top().second);
         pq.pop();
      }

      return ans;
   }
};