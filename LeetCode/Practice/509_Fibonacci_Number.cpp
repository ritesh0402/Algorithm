class Solution
{
public:
    int fib(int n)
    {
        int n1 = 1, n2 = 1, n3 = 0;
        if (n == 0)
        {
            return 0;
        }
        for (int i = 1; i < n; i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        return n1;
    }
};