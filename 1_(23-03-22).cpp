#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0, x = 0, n = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int countN = 0;
        cin >> n >> x;
        cout << ((2 * n) + 1 - x) << endl;
    }
}