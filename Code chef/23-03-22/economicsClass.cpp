#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0, tp = 0, n = 0, s = 0, d = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int countN = 0;
        cin >> n;
        vector<int> S;
        vector<int> D;
        for (int j = 0; j < n; j++)
        {
            cin >> s;
            S.push_back(s);
        }
        for (int j = 0; j < n; j++)
        {
            cin >> d;
            D.push_back(d);
        }

        for (int k = 0; k < n; k++)
        {
            if (S[k] == D[k])
            {
                countN++;
            }
        }
        cout << countN << endl;
    }
}