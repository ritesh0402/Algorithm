class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 1; i < nums.size(); i += 2)
        {
            ans.insert(ans.end(), nums[i - 1], nums[i]);
        }

        // for (int i = 0; i < nums.size() - 1; i += 2) {
        //     for (int j = 0; j < nums[i]; j++) {
        //         ans.push_back(nums[i+1]);
        //     }
        // }

        return ans;
    }
};