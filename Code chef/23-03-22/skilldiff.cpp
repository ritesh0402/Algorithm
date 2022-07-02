#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0, x = 0, y = 0, d = 0;
    vector<vector<int>> data;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> testcase;
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            testcase.push_back(x);
        }
        data.push_back(testcase);
    }

    for (int k = 0; k < t; k++)
    {
        int dec = data[k][0] > data[k][1] ? data[k][0] - data[k][1] : data[k][1] - data[k][0];
        if (dec <= data[k][2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}