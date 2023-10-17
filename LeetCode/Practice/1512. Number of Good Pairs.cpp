class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int arr[101] = {0}, ans=0;
        for(int i=0; i<nums.size(); i++){
            ans+=arr[nums[i]];
            arr[nums[i]]++;
        }
        return ans;
    }
};