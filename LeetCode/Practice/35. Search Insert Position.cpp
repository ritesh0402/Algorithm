class Solution
{
public:
   int searchInsert(vector<int> &nums, int target)
   {
      int l = 0, r = nums.size() - 1;
      // if(target>nums[r]) return r+1;
      // else if(target<nums[l]) return 0;
      while (l <= r)
      {
         int m = l + (r - l) / 2;
         if (target == nums[m])
            return m;
         else if (target > nums[m])
            l = m + 1;
         else
            r = m - 1;
      }
      return l;
   }
};