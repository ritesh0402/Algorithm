// class Solution {
// public:
//     int specialArray(vector<int>& nums) {
//         int ans = 1;
//         if(nums[nums.size()-1]<ans){
//             return -1 ;
//         }
//         sort(nums.begin(), nums.end());
//         for(int i = nums.size()-1; i > 0; i--){
//             if(nums[i-1]>=ans){
//                 ans++;
//                 if(i==1 && ans > nums.size()){
//                     return -1;
//                 }
//             }else{
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };

class Solution
{
public:
   int specialArray(vector<int> &nums)
   {
      int v[102];
      memset(v, 0, sizeof v);
      for (const auto &n : nums)
      {
         ++v[n > 100 ? 100 : n];
      }
      for (int i = 100; i > 0; --i)
      {
         v[i] = v[i + 1] + v[i];
         if (v[i] == i)
            return i;
      }
      return -1;
   }
};