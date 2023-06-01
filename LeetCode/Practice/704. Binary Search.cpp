class Solution
{
public:
   int search(vector<int> &nums, int target)
   {
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
      cout.tie(nullptr);

      int l = 0;
      int h = nums.size() - 1;
      while (l <= h)
      {
         // int m = l + ((h-l)/2);
         int m = ((h + l) / 2);
         if (target == nums[m])
         {
            return m;
         }
         if (target < nums[m])
         {
            h = m - 1;
         }
         else
         {
            l = m + 1;
         }
      }
      return -1;
   }
};