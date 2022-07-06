class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int j = 0, i = 0;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        for (int k = j; k < i; k++)
        {
            nums[k] = 0;
        }
    }
};