#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0, n = 0, dec = 0;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count1 = 0;
        int count0 = 0;
        cin >> n;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '0')
            {
                count0++;
            }
            if (s[j] == '1')
            {
                count1++;
            }
        }
        cout << "count" << count1 << " " << count0;

        if (count0 >= count1)
        {
            dec = count0;
            int dif = count1 - count0;
            dec = (2 * dec);
            if (dif >= 1)
            {
                dec += 1;
            }
        }
        else
        {
            dec = count1;
            int dif = count0 - count1;
            dec = (2 * dec);
            if (dif >= 1)
            {
                dec += 1;
            }
        }

        cout << dec << endl;
    }
}