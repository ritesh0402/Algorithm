#include <bits/stdc++.h>
using namespace std;

void runCase()
{
    int n, k, q, temp;
    cin >> n >> k >> q;
    vector<int> dist, time;
    for (int i = 0; i < k; i++)
    {
        cin >> temp;
        dist.push_back(temp);
    }
    dist.insert(dist.begin(), 0);
    for (int i = 0; i < k; i++)
    {
        cin >> temp;
        time.push_back(temp);
    }
    time.insert(time.begin(), 0);
    for (int i = 0; i < q; i++)
    {
        int d = 0, j = 0;
        cin >> d;
        while (d >= dist[j + 1])
            j++;

        if (dist[j] != d)
        {
            long long d_diff = d - dist[j];
            // long double speedReciprocal = (dist[j + 1] - dist[j]) / (time[j + 1] - time[j]);
            // long long x = time[j] + (speedReciprocal * remainingD);
            int a_diff = dist[j + 1] - dist[j];
            int b_diff = time[j + 1] - time[j];
            cout << time[j] + int64_t(b_diff) * d_diff / a_diff << " ";
        }
        else
        {
            cout << time[j] << " ";
        }
    }
    cout << endl;
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
