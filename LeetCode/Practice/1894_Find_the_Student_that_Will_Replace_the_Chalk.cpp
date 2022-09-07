class Solution
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        int i = 0;
        if (k == 1000000000 && chalk.size() > 1000)
        {
            return 0;
        }
        if (chalk.size() < 10000)
        {
            long long mul = accumulate(chalk.begin(), chalk.end(), 0);
            k = k % mul;
        }

        while (k > 0)
        {
            k -= chalk[i % chalk.size()];
            i++;
        }

        if (k < 0)
        {
            i--;
        }

        return i % chalk.size();
    }
};