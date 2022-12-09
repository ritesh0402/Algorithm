class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {
        int ans = 0;
        // int n=nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < (nums.size() / 2); i++)
        {
            if (ans < (nums[i] + nums[nums.size() - i - 1]))
            {
                ans = (nums[i] + nums[nums.size() - i - 1]);
            }
            // ans = max(ans, (nums[i] + nums[nums.size()-i-1]));
            // cout << nums[i] << " and " << nums[n-i-1] << endl;
        }
        return ans;
    }
};