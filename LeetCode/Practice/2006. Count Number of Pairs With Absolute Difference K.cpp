class Solution
{
public:
   int countKDifference(vector<int> &nums, int k)
   {
      // int ans = 0;
      // for (int i = 0; i < nums.size() - 1; i++)
      // {
      //     for (int j = i + 1; j < nums.size(); j++)
      //     {
      //         if (nums[i] + k == nums[j] || nums[i] - k == nums[j])
      //         {
      //             ans++;
      //         }
      //     }
      // }
      // return ans;

      int ans = 0;
      int arr[101];
      memset(arr, 0, sizeof(arr));
      for (int &x : nums)
      {
         arr[x]++;
      }
      for (int i = 0; i < 101 - k; i++)
      {
         ans += arr[i] * arr[i + k];
      }
      return ans;
   }
};
