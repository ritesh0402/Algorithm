#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

class Solution
{
public:
    int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
    {
        long maxh = 0;
        long maxw = 0;
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());

        for (int i = 0; i < horizontalCuts.size() - 1; i++)
        {
            maxh = max((int)maxh, horizontalCuts[i + 1] - horizontalCuts[i]);
        }

        for (int j = 0; j < verticalCuts.size() - 1; j++)
        {
            maxw = max((int)maxw, verticalCuts[j + 1] - verticalCuts[j]);
        }
        long val = (maxh * maxw);
        return val % ((int)pow(10, 9) + 7);
    }
};