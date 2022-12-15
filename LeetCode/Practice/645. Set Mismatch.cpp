// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         int arr[nums.size()] = {0};
//         int n = nums.size();
//       int arr[n];
//       // fill(arr, arr + n, 0);
//       memset(arr, 0, 4 * n);
//       for (int i = 0; i < n; i++)
//       {
//          arr[nums[i]]++;
//          if (arr[nums[i]] > 1)
//          {
//             return nums[i];
//          }
//       }
//       return nums[0];
//    }

// };

class Solution
{
public:
   vector<int> findErrorNums(vector<int> &nums)
   {
      int tot = nums.size() * (nums.size() + 1) / 2;
      int sum = 0, rep = 0;
      unordered_map<int, int> ump;
      for (int &x : nums)
      {
         sum += x;
         ump[x]++;
         if (ump.at(x) > 1)
         {
            rep = x;
         }
      }
      return {rep, tot - sum + rep};
   }
};