class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        int arr[501] = {0};
        for (int &x : nums)
        {
            arr[x]++;
        }
        for (int &x : arr)
        {
            if (x % 2 != 0)
            {
                return false;
            }
        }
        return true;
    }
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    }
};

class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {

        int arr[501] = {0};
        for (int &x : nums)
        {
            arr[x]++;
        }
        for (int &x : arr)
        {
            if (x % 2 != 0)
            {
                return false;
            }
        }
        return true;
    }
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    }
};

// class Solution {
// public:
//     bool divideArray(vector<int>& nums) {
//         int num=nums[0];
//         for(int i=1; i<nums.size(); i++){
//             num = num^nums[i];
//         }
//         return num==0;
//     }
//     Solution() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//   }
// };