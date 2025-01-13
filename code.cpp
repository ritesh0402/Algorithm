#include <bits/stdc++.h>
using namespace std;

void runCase()
{
    string str;
    cin >> str;
    int len = str.length();
    int ans = 0;
    for (int l = 0; l < len; l++)
    {
        int ones = 0, zeros = 0;
        for (int r = l; r < len; r++)
        {
            if (str[r] == '0')
            {
                zeros++;
            }
            else
            {
                ones++;
            }
            if (ones == zeros)
            {
                // cout << l << r << " | ";
                ans += l + r + 1;
            }
        }
        // cout << endl;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif
    int t = 0;
    cin >> t;
    while (t--)
    {
        runCase();
    }
}
