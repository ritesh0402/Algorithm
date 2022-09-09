// class Solution {
// public:
//     vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
//         vector<int> arr(nums.size(), -1);
//         for(int i=0; i<nums.size(); i++){
//             if(arr[index[i]] == -1){
//                 arr[index[i]] = nums[i];
//             }else{
//                 arr.insert(arr.begin()+index[i], nums[i]);
//             }
//         }
//         int n = arr.size();
//         while(arr[n-1] == -1){
//             arr.pop_back();
//             n--;
//         }
//         return arr;
//     }
// };

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++)
        {
            arr.insert(arr.begin() + index[i], nums[i]);
        }
        return arr;
    }
};
