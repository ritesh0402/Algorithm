#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int minMaxGame(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> newNums;
        int yaxis = 0, xaxis = 0;
        for (int j = 0; j < n; j++)
        {
            newNums[yaxis][j] = nums[j];
        }
        yaxis++;
        while (n != 1)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (i % 2 == 0)
                {
                    newNums[yaxis][i] = min(newNums[yaxis - 1][xaxis], newNums[yaxis - 1][xaxis + 1]);
                }
                else
                {
                    newNums[yaxis][i] = min(newNums[yaxis - 1][xaxis], newNums[yaxis - 1][xaxis + 1]);
                }
                xaxis += 2;
            }

            n /= 2;
            yaxis++;
            xaxis = 0;
        }
        return newNums[yaxis - 1][0];
    }
};