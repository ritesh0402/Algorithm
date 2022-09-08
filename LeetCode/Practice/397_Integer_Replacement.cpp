class Solution
{
public:
    long calc(long n)
    {
        int c = 0;
        if (n == 1)
            return c;
        if (n % 2 == 0)
            c = calc(n / 2) + 1;
        else
            c = min(calc(n - 1), calc(n + 1)) + 1;

        return c;
    }
    int integerReplacement(int n)
    {
        return calc((long)n);
    }
};