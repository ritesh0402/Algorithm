class Solution
{
public:
    int minPartitions(string n)
    {
        int ans = 0;
        for (char x : n)
        {
            if (x == '9')
                return 9;
            if (ans < x - '0')
            {
                ans = x - '0';
            }
        }
        return ans;
    }
};