class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        unordered_map<int, int> ump;

        for(int &x: nums){
            long long newX = 0, tens = 1, temp = x;
            while(temp>0){
                int d = temp%10;
                temp /= 10;
                newX += mapping[d] * tens;
                tens*=10;
            }
            if(x == 0){
                newX = mapping[x];
            }
            ump[x] = newX;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b){
            return ump[a]<ump[b];
        });
        return nums;
    }
};