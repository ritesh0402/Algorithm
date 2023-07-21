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
      int n = 0, k = 0, ans = INT_MAX, a = 0;
      cin >> n >> k;
      priority_queue<int> pq;
      for (int i = 0; i < n; i++)
      {
         cin >> a;
         pq.push(a);
      }

      int remove = n;
      for (int i = 1; i < n; i++)
      {
         int prev = pq.top();
         pq.pop();
         remove--;
         if (prev - pq.top() > k)
         {
            ans = min(ans, remove);
            remove = n;
         }
      }
      cout << min(ans, remove - 1) << endl;
   }
}
