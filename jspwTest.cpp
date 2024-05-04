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
        int nums[10] = {0};
        int subseq[10] = {0};
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
            if (nums[a[r]] != 0)
            {
                // if (subseq[a[r]] < nums[a[r]])
                subseq[a[r]]++;
                if (subseq[a[r]] <= nums[a[r]])
                    matches++;
            }
            if (matches >= k)
                ans++;
        }
        while (r < n - 1)
        {
            if (nums[a[r - m + 1]] > 0)
            {
                matches--;
            }
            if (nums[a[++r]] > 0)
            {
                subseq[a[r]]++;
                matches++;
            }
        }
        cout << ans << endl;
    }
}
