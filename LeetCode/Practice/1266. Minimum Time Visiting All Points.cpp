class Solution
{
public:
   int toTime(vector<int> &from, vector<int> &to)
   {
      int xDist = abs(from[0] - to[0]);
      int yDist = abs(from[1] - to[1]);
      return max(xDist, yDist);
   }

   int minTimeToVisitAllPoints(vector<vector<int>> &points)
   {
      int time = 0;
      for (int i = 1; i < points.size(); i++)
      {
         time += toTime(points[i - 1], points[i]);
      }
      return time;
   }
};