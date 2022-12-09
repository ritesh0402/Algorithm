class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, int> um;
        for (int &x : nums)
        {
            ++um[x];
        }

        sort(nums.begin(), nums.end(), [&](int &a, int &b)
             {
            if(um[a] == um[b]){ 
                return a > b;
            }
            return um[a] < um[b]; });
        return nums;
    }
};