#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minPoints(vector<pair<int, int>> &intervals)
{
   sort(intervals.begin(), intervals.end());

   int points = 0;
   int current = INT_MIN;

   for (const auto &interval : intervals)
   {
      if (interval.first > current)
      {
         current = interval.second;
         points++;
      }
      else
      {
         current = min(current, interval.second);
      }
   }

   return points;
}

int main()
{
   vector<pair<int, int>> intervals = {{1, 3}, {2, 4}, {5, 7}, {6, 8}};

   int minPointsNeeded = minPoints(intervals);

   cout << "Minimum number of points needed: " << minPointsNeeded << endl;

   return 0;
}
