#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long t = 0, n = 0, x = 0, c = 0, d = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> x;
        int vec[n] = {0};
        if (n % 2 != 0)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                vec[c++] = (x - i);
                vec[c++] = (x + i);
            }
            vec[c++] = (x);
        }
        else if (n % 2 == 0)
        {
            for (int j = 1; j <= n / 2; j++)
            {
                vec[d++] = (x - j);
                vec[d++] = (x + j);
            }
        }
        for (int k = 0; k < n; k++)
        {
            cout << vec[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
