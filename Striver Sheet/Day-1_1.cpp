// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//    int t = 0;
//    int n = 0;
//    int k = 0;
//    long long res = 0;
//    cin >> t;
//    for (int i = 0; i < t; i++)
//    {
//       n = 0;
//       k = 0;
//       cin >> n;
//       int arr[n];
//       for (int j = 0; j < n; j++)
//       {
//          cin >> arr[j];
//       }
//       int cnt = 0;
//       for (int i = 0; i < n; i++)
//       {
//          if (arr[i] > i + cnt)
//          {
//             cnt += arr[i] - i - cnt;
//          }
//       }
//       cout << cnt - 1 << endl;
//    }
// }

// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//    int t = 0;
//    int n = 0;
//    int k = 0;
//    long long res = 0;
//    cin >> t;
//    for (int i = 0; i < t; i++)
//    {
//       n = 0;
//       k = 0;
//       cin >> n;
//       int arr[n];
//       for (int j = 0; j < n; j++)
//       {
//          cin >> arr[j];
//       }
//       int cnt = 0, extraeven = 0, extraodd = 0, sum = 0;
//       for (int i = 0; i < n; i++)
//       {
//          if (arr[i] % 2 == 0)
//          {
//             extraeven = 1;
//          }
//          else
//          {
//             extraodd = 1;
//          }
//          sum += arr[i];
//       }
//       if (extraeven == extraodd || sum % 2 != 0)
//       {
//          cout << "YES" << endl;
//       }
//       else
//       {
//          cout << "NO" << endl;
//       }
//    }
// }

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int t = 0;
   int n = 0;
   long long res = 0;
   cin >> t;
   for (int i = 0; i < t; i++)
   {
      n = 0;
      int perday = 0;
      cin >> n >> perday;
      map<int, int> mp;
      int color;
      for (int j = 0; j < n; j++)
      {
         cin >> color;
         mp[color]++;
      }
      double cnt = 0, last = 0;
      for (auto it : mp)
      {
         last = it.second;
         cnt += last;
      }
      cout << ceil(1.0 * (cnt - last) / perday) << endl;
   }
}