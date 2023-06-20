// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//    int t = 0;
//    cin >> t;
//    for (int i = 0; i < t; i++)
//    {
//       int temp = 0, len = 0, ans = 0;
//       cin >> len;
//       vector<int> v;
//       for (int j = 0; j < len; j++)
//       {
//          cin >> temp;
//          v.push_back(temp);
//       }

//       for (int i = 0; i < len; i++)
//       {

//       }

//       cout << sum << " " << ans << endl;
//    }
// }

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
      long long num = 0, ans = 0;
      cin >> num;
      ans += num;
      while (num > 1)
      {
         num /= 2;
         ans += num;
      }

      cout << ans << endl;
   }
}
