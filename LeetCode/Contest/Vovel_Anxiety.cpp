#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t = 0;
    int n = 0;
    string str;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        n = 0;
        str = "";
        cin >> n >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                reverse(str.begin(), str.begin() + i);
            }
        }

        cout << str << endl;
    }
    return 0;
}