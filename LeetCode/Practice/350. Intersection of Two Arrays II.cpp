class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ump;
        vector<int> ans;
        for(int &x: nums1){
            ump[x]++;
        }
        for(int &y: nums2){
            if(ump.find(y) != ump.end() && ump[y] != 0){
                ans.push_back(y);
                ump[y]--;
            // cout << y << " " ;
            }
        }
        return ans;
    }
};