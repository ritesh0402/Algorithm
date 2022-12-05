class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int stack = 0;
        int ans = 0;
        for (char x : s)
        {
            if (x == 'R')
            {
                stack++;
            }
            else if (x == 'L')
            {
                stack--;
            }
            if (stack == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};