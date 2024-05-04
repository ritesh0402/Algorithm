#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, c = 0, d = 0, ans = 0, temp = 0, start = INT_MAX;
        cin >> n >> c >> d;
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            st.push(temp);
            start = min(start, temp);
        }

        cout << ans << endl;
    }
}

int main()
{
    while (r < n)
    {
    }
    if (sum % (l - r) == 0)
}
