#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0, a = 0, b = 0, c = 0, d = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        if ((a <= c) && (b <= d))
        {
            cout << "POSSIBLE" << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }
}