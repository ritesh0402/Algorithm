class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int prev = nums[0], index = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] == nums[i])
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};