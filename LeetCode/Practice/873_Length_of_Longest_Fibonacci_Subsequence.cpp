#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 3, 7, 11, 12, 14, 18};
    for (int i = 2; i < arr.size(); i++)
    {
        while (i < arr.size() && arr[i] != arr[i - 2] + arr[i - 1])
        {
            arr.erase(arr.begin() + i);
        }
    }
    cout << arr.size();
    return arr.size();
}