class Solution
{
public:
   int maximizeGreatness(vector<int> &nums)
   {
      int ans = 0, i = 0, j = 1;
      sort(nums.begin(), nums.end());
      while (j < nums.size())
      {
         if (nums[i] < nums[j])
         {
            i++;
            j++;
            ans++;
         }
         else
         {
            j++;
         }
      }
      return ans;
   }
};