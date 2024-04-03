#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        n *= 2;
        for (int i = 0; i < n; i++)
        {
            bool hash = (i / 2) % 2 == 0;
            for (int j = 0; j < n; j++)
            {
                if (hash)
                    cout << '#';
                else
                    cout << '.';
                hash = j % 2 == 1 ? !hash : hash;
            }
            cout << endl;
        }
    }
}
