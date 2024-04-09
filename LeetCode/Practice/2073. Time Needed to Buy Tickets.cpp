class Solution
{
public:
   int timeRequiredToBuy(vector<int> &tickets, int k)
   {
      int ans = 0, t = tickets[k] - 1;
      for (int i = 0; i < tickets.size(); i++)
      {
         if (i > k)
            tickets[k] = t;
         ans += min(tickets[i], tickets[k]);
      }
      return ans;
   }
};