class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size(); i+=2){
        //     if(nums[i] != nums[i+1]){
        //         return false;
        //     }
        // }

        int arr[501] = {0};
        for (int &x : nums)
        {
            arr[x]++;
        }
        for (int &x : arr)
        {
            if (x % 2 != 0)
            {
                return false;
            }
        }
        return true;
    }
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    }
};