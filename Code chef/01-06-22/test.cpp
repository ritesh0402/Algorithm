#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0;
    int n = 0;
    int k = 0;
    long long res = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        n = 0;
        k = 0;
        cin >> n >> k;
        res = (((2 * k) + n - 2) * (n - 1) / 2) % n;
        res++;
        if (res % 2 == 0)
        {
            cout << "EVEN" << endl;
        }

        else
        {
            cout << "ODD" << endl;
        }
    }
}