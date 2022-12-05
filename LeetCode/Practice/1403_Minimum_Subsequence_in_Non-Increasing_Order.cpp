class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int psum = 0, i=nums.size()-1;
        while(psum <= sum && i>=0){
            ans.push_back(nums[i]);
            psum+=2*nums[i];
            i--;
        }
        
        return ans;
    }
};