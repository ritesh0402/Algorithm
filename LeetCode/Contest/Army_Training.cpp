#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t = 0;
    int n = 0;
    int inp = 0;
    long long atk = 0;
    long long defe = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        n = 0;
        atk = 0;
        defe = 0;
        inp = 0;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            cin >> inp;
            if (inp > 500)
            {
                atk += inp;
            }
            else if (atk < defe && inp == 500)
            {
                atk += inp;
            }
            else
            {
                defe += 1000 - inp;
            }
        }
        if (defe == 0)
        {
            cout << atk << endl;
        }
        else if (atk == 0)
        {
            cout << defe << endl;
        }
        else
        {
            cout << atk * defe << endl;
        }
    }
    return 0;
}