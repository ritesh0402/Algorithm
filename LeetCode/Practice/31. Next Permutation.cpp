class Solution
{
public:
   void nextPermutation(vector<int> &nums)
   {
      int brInd = -1;
      int minInd = 0;
      for (int i = nums.size() - 1; i > 0; i--)
      {
         if (nums[i] > nums[i - 1])
         {
            brInd = i - 1;
            break;
         }
      }
      cout << brInd << endl;

      if (brInd != -1)
      {
         for (int i = nums.size() - 1; i > 0; i--)
         {
            if (nums[i] > nums[brInd])
            {
               minInd = i;
               break;
            }
         }
         cout << minInd;
         swap(nums[brInd], nums[minInd]);
         sort(nums.begin() + brInd + 1, nums.end());
      }
      else
      {
         sort(nums.begin(), nums.end());
      }
   }
};