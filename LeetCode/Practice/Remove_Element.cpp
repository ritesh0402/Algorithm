class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int res = nums.size(), j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[j] = nums[i];
                j++;
            }
            else
            {
                res--;
            }
        }
        return res;
    }
};