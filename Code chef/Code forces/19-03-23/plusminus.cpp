#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int t = 0;

   cin >> t;
   cout << t << endl;
   for (int i = 0; i < t; i++)
   {
      int a = 0, b = 0, c = 0;
      cin >> a >> b >> c;
      if (a + b == c)
      {
         cout << '+' << endl;
      }
      else
      {
         cout << '-' << endl;
      }
   }
}
