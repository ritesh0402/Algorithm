#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, k = 0, m = 0, ans = 0, temp = 0;
        cin >> n >> m >> k;
        vector<int> a;
        int nums[m] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            nums[temp]++;
        }
        int matches = 0, l = -1, r = 0;
        for (r = 0; r < m; r++)
        {
            if (ump.find(a[r]) != ump.end())
            {
                if (ump.at(a[r]) == 0)
                    matches++;
                ump[a[r]]++;
            }
        }
        while (r < n - 1)
        {
            l++;
            if (ump.find(a[l]) != ump.end())
            {
                matches--;
                ump[a[l]]--;
            }
            r++;
            if (ump.find(a[r]) != ump.end())
            {
                matches++;
                ump[a[l]]++;
            }
            if (matches >= k)
                ans++;
        }
        cout << ans << endl;
    }
}
