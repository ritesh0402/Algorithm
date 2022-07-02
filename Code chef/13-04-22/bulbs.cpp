#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0, n = 0, x = 0, temp = 0, avg = 0, ans;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> x;
        temp = 0;
        avg = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> temp;
            avg += temp;
        }
        x *= (n);
        if (x - avg < 0)
        {
            ans = 0;
        }
        else
        {
            ans = x - avg;
        }
        cout << ans << endl;
    }
}