class Solution
{
public:
    bool isPalindrome(int x)
    {
        bool res = false;
        long s = 0, t = x, b = 10;
        while (t > 0)
        {
            s += (t % b);
            s *= b;
            t /= b;
        }
        s /= b;
        res = (s == x);
        return res;
    }
};