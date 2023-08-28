class Solution
{
public:
   int findMinDifference(vector<string> &timePoints)
   {
      vector<int> time;
      int minTime;
      for (int i = 0; i < timePoints.size(); i++)
      {
         time.push_back((stoi(timePoints[i].substr(0, 2)) * 60) + stoi(timePoints[i].substr(3, 5)));
      }
      sort(time.begin(), time.end());

      minTime = 1440 - time[time.size() - 1] + time[0];
      for (int i = 0; i < time.size() - 1; i++)
      {
         minTime = min(minTime, (time[i + 1] - time[i]));
      }
      return minTime;
   }
};