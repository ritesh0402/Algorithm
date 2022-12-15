// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         if(k > nums.size()){
//             return false;
//         }
//         for(int i=0; i<nums.size(); i++){
//             for(int j=i+1; abs(i-j)<=k && j!=nums.size(); j++){
//                 if(nums[i] == nums[j]){
//                     return true;
//                 }
//             }
//         }

//         return false;
//     }
// };

class Solution
{
public:
   bool containsNearbyDuplicate(vector<int> &nums, int k)
   {
      unordered_map<int, int> m;
      for (int i = 0; i < nums.size(); i++)
      {
         if (m.find(nums[i]) == m.end())
         {
            m[nums[i]] = i;
         }
         else
         {
            if (abs((m[nums[i]]) - i) <= k)
            {
               return true;
            }
            else
            {
               m[nums[i]] = i;
            }
         }
      }
      return false;
   }
};