// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> ump;
//         for(int &x: nums){
//             ump[x]++;
//         }
//         for(auto &y: ump){
//             if(y.second > nums.size()/2){
//                 return y.first;
//             }
//         }
//         return 0;
//     }
// };

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int cnt = 0;
//         int ele = 0;
//       for(int i:nums){
//         if(cnt == 0){
//           ele = i;
//         }
//         if(i == ele){
//           cnt +=1;
//         }
//         else{
//           cnt -=1;
//         }
//       }
//       return ele;
//     }
// };

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> ump;
//         for(int &x: nums){
//             ump[x]++;
//             if(ump[x] > nums.size()/2){
//                 return x;
//             }
//         }
//         return 0;
//     }
// };

// Moore's voting algo

class Solution
{
public:
   int majorityElement(vector<int> &nums)
   {
      int el = nums[0];
      int cnt = 0;
      for (int i = 0; i < nums.size(); i++)
      {
         if (el == nums[i])
         {
            cnt++;
         }
         else
         {
            cnt--;
         }
         if (cnt == 0)
         {
            el = nums[i + 1];
         }
      }
      return el;
   }
};
