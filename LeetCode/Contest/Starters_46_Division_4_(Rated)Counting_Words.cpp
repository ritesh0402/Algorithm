#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t = 0;
    int n = 0;
    int m = 0;
    long long res = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        n = 0;
        m = 0;
        cin >> n >> m;
        cout << n * m << endl;
    }
    return 0;
}