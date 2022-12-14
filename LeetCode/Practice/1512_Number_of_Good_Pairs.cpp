class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        // int ans=0;
        // for(int i=0; i<nums.size()-1; i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i] == nums[j]){
        //             ans++;
        //         }
        //     }
        // }
        // return ans;

        unordered_map<int, int> ump;
        int ans = 0;
        for (int &x : nums)
        {
            ump[x]++;
        }
        for (auto &y : ump)
        {
            int x = y.second;
            if (x != 1)
            {
                ans += x * (x - 1) / 2;
                // cout << x << endl;
            }
        }
        return ans;
    }
};