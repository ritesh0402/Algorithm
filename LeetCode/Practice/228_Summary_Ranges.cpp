class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        int i = 0, s = 0, lim = nums.size();
        vector<string> ans;
        while (i < lim)
        {
            s = nums[i];
            while (i < lim - 1 && nums[i] + 1 == nums[i + 1])
            {
                i++;
            }
            if (s != nums[i])
            {
                ans.push_back(to_string(s) + "->" + to_string(nums[i]));
            }
            else
            {
                ans.push_back(to_string(s));
            }
            i++;
        }
        return ans;
    }
};