class Solution
{
public:
   int getLastMoment(int n, vector<int> &left, vector<int> &right)
   {
      ios_base::sync_with_stdio(false);
      int maxTime = 0;
      for (int &x : left)
      {
         maxTime = max(maxTime, x);
      }
      for (int &y : right)
      {
         maxTime = max(maxTime, n - y);
      }
      return maxTime;
   }
};

class Solution
{
public:
   int getLastMoment(int n, vector<int> &left, vector<int> &right)
   {
      int maxT = 0;
      for (int &x : left)
         maxT = max(maxT, x);
      for (int &y : right)
         maxT = max(maxT, n - y);
      return maxT;
   }
};