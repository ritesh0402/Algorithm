#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void runCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    vector<int> b(n);
    set<int> st;
    for (auto &x : b)
    {
        cin >> x;
        st.insert(x);
    }
    multiset<int> ops;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            ops.insert(b[i]);
    }

    int m;
    cin >> m;
    bool status = false;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (ops.find(x) != ops.end())
        {
            ops.erase(ops.find(x));
            if (i == m - 1)
                status = true;
        }
        else if (st.count(x))
        {
            if (i == m - 1)
                status = true;
        }
    }

    if (status && ops.size() == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
