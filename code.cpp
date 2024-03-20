#include <bits/stdc++.h>
using namespace std;

bool canReach(int x, int y, int n, vector<vector<char>> &arr, vector<vector<bool>> &vis)
{
    if (x == 1 && y == n - 1)
        return true;
    if (x > 1 || x < 0 || y < 0 || y >= n)
        return false;
    vis[x][y] = true;
    bool temp = false;
    temp = canReach(x + 1, y, n, arr, vis) || canReach(x, y + 1, n, arr, vis) || canReach(x - 1, y, n, arr, vis) || canReach(x, y - 1, n, arr, vis);
    return temp;
}

int main()
{
    int t = 0;
    cin >> t;
    for (int testcase = 0; testcase < t; testcase++)
    {
        int n = 0;
        char inp;
        cin >> n;
        vector<vector<char>> arr(2, vector<char>());
        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            arr[0].push_back(inp);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            arr[1].push_back(inp);
        }

        vector<vector<bool>> vis(2, vector<bool>(n, false));
        if (canReach(0, 0, n, arr, vis))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
