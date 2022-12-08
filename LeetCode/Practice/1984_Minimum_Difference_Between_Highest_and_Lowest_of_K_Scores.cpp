class Solution
{
public:
    int minimumDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = nums[k - 1] - nums[0];
        for (int i = 1; i < n - k + 1; i++)
        {
            if (ans > (nums[i + k - 1] - nums[i]))
            {
                ans = nums[i + k - 1] - nums[i];
                // cout << nums[i] << " and " << nums[i+k-1] << endl;
            }
        }
        return ans;
    }
};