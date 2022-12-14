class Solution
{
public:
   int findDuplicate(vector<int> &nums)
   {
      int n = nums.size();
      int arr[n];
      // fill(arr, arr + n, 0);
      memset(arr, 0, 4 * n);
      for (int i = 0; i < n; i++)
      {
         arr[nums[i]]++;
         if (arr[nums[i]] > 1)
         {
            return nums[i];
         }
      }
      return nums[0];
   }
};