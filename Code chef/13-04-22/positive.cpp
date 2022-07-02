#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t = 0, n = 0, count1 = 0, count2 = 0, temp = 0, ans;
    vector<int> vec;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        temp = 0;
        count1 = 0;
        count2 = 0;
        ans = 0;
        for (int k = 0; k < n; k++)
        {
            cin >> temp;
            vec.push_back(temp);
        }

        for (int i = 0; i < n; i++)
        {
            if (vec[i] > 0)
            {
                count1++;
            }
            else if (vec[i] < 0)
            {
                count2++;
            }
        }
        ans = (count1 * (count1 - 1) / 2) + (count2 * (count2 - 1) / 2);

        cout << ans << endl;
    }
}