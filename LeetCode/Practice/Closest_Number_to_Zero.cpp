class Solution
{
public:
    int findClosestNumber(vector<int> &nums)
    {
        int nmax = -100000000, pmin = 100000000;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= 0)
            {
                pmin = min(pmin, nums[i]);
            }
            else
            {
                nmax = max(nmax, nums[i]);
            }
        }

        if (-nmax < pmin)
        {
            return nmax;
        }
        else
        {
            return pmin;
        }
    }
};