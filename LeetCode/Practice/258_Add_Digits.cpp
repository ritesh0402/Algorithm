class Solution
{
public:
    int addDigits(int num)
    {
        long long res = 10;
        while (res > 9)
        {
            res = 0;
            while (num >= 1)
            {
                res += num % 10;
                num /= 10;
            }
            num = res;
        }
        return res;
    }
};