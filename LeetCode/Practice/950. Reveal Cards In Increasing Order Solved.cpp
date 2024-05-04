class Solution
{
public:
   vector<int> deckRevealedIncreasing(vector<int> &deck)
   {
      sort(deck.begin(), deck.end());

      int n = deck.size();
      vector<int> ans(n);
      queue<int> q;

      for (int i = 0; i < n; i++)
      {
         q.push(i);
      }

      int i = 0;
      while (!q.empty())
      {
         int ind = q.front();
         q.pop();
         ans[ind] = deck[i++];
         q.push(q.front());
         q.pop();
      }
      return ans;
   }
};