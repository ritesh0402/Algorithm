#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++)
    {
        int ans = 0,k=0, n = 0;
        cin >> n >> k;
        vector<char> arr(n);
        char temp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int j = 0; j < 10; j++)
        {
            if (arr[j] == 'B')
            {
                j += k - 1;
                ans++;
            }
        }

        cout << ans << endl;
    }
}
