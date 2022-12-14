class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> ump;
        for(int i=0; i<nums.size(); i++){
            ump[nums[i]]++;
            if(ump.at(nums[i])>1){
                return true;
            }
        }
        return false;
    }
};