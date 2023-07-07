#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int t = 0;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      int n = 0, m = 0, h = 0, temp = 0;
      cin >> n >> m >> h;
      priority_queue<pair<int, int>> pointTable;
      vector<priority_queue<int, vector<int>, greater<int>>> vopq(n);
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            cin >> temp;
            vopq[i].push(temp);
         }
      }
      if (n == 1)
      {
         cout << 1 << endl;
         continue;
      }
      // rodolf rank
      int rpenalty = 0, rpoints = 0;
      for (int j = 0; j < m; j++)
      {
         if ((2 * rpenalty) + vopq[0].top() > h)
            break;
         rpenalty += vopq[0].top() + rpenalty;
         vopq[0].pop();
         rpoints++;
      }
      rpenalty = h - rpenalty;

      for (int i = 1; i < n; i++)
      {
         int penalty = 0, points = 0;
         for (int j = 0; j < m; j++)
         {
            if ((2 * penalty) + vopq[i].top() > h)
               break;
            penalty += vopq[i].top() + penalty;
            vopq[i].pop();
            points++;
         }
         pointTable.push(make_pair(points, h - penalty));
      }
      int rank = 1;

      while (!pointTable.empty() && rpoints <= pointTable.top().first)
      {
         cout << "--" << pointTable.top().first << " " << pointTable.top().second << endl;
         if (rpoints == pointTable.top().first && rpenalty >= pointTable.top().second)
         {
            break;
         }
         rank++;
         pointTable.pop();
      }

      cout << rank << endl;
   }
}