#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0, n = 0, m = 0, k = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> m;
        cin >> k;
        if ((k * m) >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}