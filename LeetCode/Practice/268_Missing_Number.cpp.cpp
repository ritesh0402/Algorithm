class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0;
        int n = nums.size();
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }

        int arrsum = 0;
        for (int i = 0; i < n; i++)
        {
            arrsum += nums[i];
        }

        return sum - arrsum;

        //     int n = 0;
        // for(int i=0; i<nums.size(); i++){
        //     n += i+1-nums[i];
        // }
        // return n;
    }
};