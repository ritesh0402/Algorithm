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
      int m = 0, b = 0, temp = 0, len = 0;
      cin >> len;
      vector<int> v;
      for (int j = 0; j < len; j++)
      {
         cin >> temp;
         v.push_back(temp);
      }
      bool ans = true;
      sort(v.begin(), v.end());
      for (int k = 0; k < len; k++)
      {
         if (v[k] % 2 == 0)
         {
            m += v[k];
         }
         else
         {
            b += v[k];
         }
         if (k % 2 != 0 && b > m)
         {
            ans = false;
            break;
         }
      }
      if (ans)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
}