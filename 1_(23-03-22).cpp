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

class Solution
{
public:
    bool isUgly(int n)
    {
        if (n < 1)
        {
            return false;
        }
        while (n % 2 == 0)
        {
            n /= 2;
        }
        while (n % 3 == 0)
        {
            n /= 3;
        }
        while (n % 5 == 0)
        {
            n /= 5;
        }
        if (n == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};