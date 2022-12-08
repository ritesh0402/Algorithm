// class Solution {
// public:
//     int findLengthOfLCIS(vector<int>& nums) {
//         int ans=0, count=0;
//         for(int i=0; i<nums.size()-1; i++){
//             if( nums[i] > nums[i+1]){
//                 count=0;
//             }
//             else if(nums[i] == nums[i+1]){
//                 count=1;
//             }
//             else{
//                 count++;
//             }
//             ans = ans < count ? count++ : ans;
//         }
//         return ans;
//     }
// };

class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int ans = 0, count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            while (i < nums.size() - 1 && nums[i + 1] > nums[i])
            {
                count++;
                // cout << nums[i] << " " << nums[i+1] << endl;
                // cout << "count " << count << endl;
                i++;
            }
            count++;
            // if(ans < count){
            //     ans = count;
            // }
            ans = count > ans ? count : ans;
            // cout << "ans " << ans << endl;
            count = 0;
        }
        return ans;
    }
};