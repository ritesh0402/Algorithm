#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0, n = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x = 0, num = 0;
        cin >> n;
        if (n % 2 == 0)
        {
            x = n / 2;
        }
        else
        {
            x -= (n / 2) + 1;
        }
        cout << x << endl;
    }
}