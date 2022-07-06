#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        vector<int> stack;
        int top = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                stack.push_back(1);
            }
            else if (s[i] == '[')
            {
                stack.push_back(2);
            }
            else if (s[i] == '{')
            {
                stack.push_back(3);
            }
            else if (s[i] == ')' && s[top] == 1)
            {
                stack.pop_back();
            }
            else if (s[i] == ']' && s[top] == 2)
            {
                stack.pop_back();
            }
            else if (s[i] == '}' && s[top] == 3)
            {
                stack.pop_back();
            }
            else
            {
                return false;
            }
        }
    }
};