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

class Solution
{
public:
   int majorityElement(vector<int> &nums)
   {
      unordered_map<int, int> ump;
      for (int &x : nums)
      {
         ump[x]++;
         if (ump.at(x) > nums.size() / 2)
         {
            return x;
         }
      }
      return 0;
   }
};