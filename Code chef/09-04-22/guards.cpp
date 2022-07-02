#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0, x = 0, m = 0, y = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        cin >> y;
        cin >> m;
        if ((x * m) < y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}