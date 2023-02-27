class Solution
{
public:
   int eliminateMaximum(vector<int> &dist, vector<int> &speed)
   {
      double s[dist.size()];
      for (int i = 0; i < dist.size(); i++)
      {
         s[i] = (1.0 * dist[i] / speed[i] * 1.0);
      }
      sort(s, s + dist.size());
      int ans = 1;
      for (int i = 1; i < dist.size(); i++)
      {
         if (s[i] <= i)
         {
            return ans;
         }
         else
         {
            ans++;
         }
      }
      return ans;
   }
};