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
      int a = 0, b = 0, c = 0, ans = 0;
      cin >> a >> b >> c;
      c = c * 2;
      ans = abs(a - b) / c + (abs(a - b) % c != 0);
      cout << ans << endl;
   }
}
