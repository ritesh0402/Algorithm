class Solution
{
public:
   vector<int> sortArrayByParityII(vector<int> &nums)
   {
      int j = 1, i = 0;
      while (true)
      {
         while (i < nums.size() && nums[i] % 2 == 0)
         {
            i += 2;
         }
         while (j < nums.size() && nums[j] % 2 == 1)
         {
            j += 2;
         }
         if (i < nums.size() && j < nums.size())
         {
            swap(nums[i], nums[j]);
         }
         else
         {
            break;
         }
      }
      return nums;
   }
};

// class Solution {
// public:
//     vector<int> sortArrayByParityII(vector<int>& nums) {
//         int j = 1, i = 0;
//       while(i<nums.size() || j<nums.size()){
//         while(i<nums.size() && nums[i]%2==0){
//             i+=2;
//         }
//         while(j<nums.size() && nums[j]%2==1){
//             j+=2;
//         }
//         if(i<nums.size() && j<nums.size()){
//             swap(nums[i], nums[j]);
//         }
//       }
//       return nums;
//    }

// };