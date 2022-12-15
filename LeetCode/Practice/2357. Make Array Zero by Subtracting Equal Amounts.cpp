// class Solution {
// public:
//     int minimumOperations(vector<int>& nums) {
//         int ans=0;
//         set<int> s;
//         for(int i=0;i<nums.size();i++){
//             s.insert(nums[i]);
//         }
//         for(auto it: s){
//             if(it!=0 )
//                 ans++;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        return s.size() - s.count(0);
    }
};

// answer is number of unique non zero elements


