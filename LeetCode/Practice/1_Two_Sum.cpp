// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         unordered_map<int, int> ump;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (ump.find(target - nums[i]) != ump.end())
//             {
//                 return {ump[target - nums[i]], i};
//             }
//             ump[nums[i]] = i;
//         }
//         return {};
//     }
// };

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int hm[target];
        memset(hm, -1, sizeof(hm));
        for (int i = 0; i < nums.size(); i++)
        {
            if (target - nums[i] > 0 && hm[target - nums[i]] != -1)
            {
                return {i, hm[target - nums[i]]};
            }
            hm[nums[i]] = i;
        }
        return {0, 0};
    }
};