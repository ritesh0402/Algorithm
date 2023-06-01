// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         int arr[n] ;
//         // fill(arr, arr + n, 0);
//         memset(arr,0,4*n);
//         for(int i=0; i<n; i++){
//             arr[nums[i]]++;
//             if(arr[nums[i]]>1){
//                 return nums[i];
//             }
//         }
//         return nums[0];
//     }
// };

class Solution
{
public:
   int findDuplicate(vector<int> &nums)
   {
      int slo = 0, fst = 0;
      do
      {
         slo = nums[slo];
         fst = nums[nums[fst]];
      } while (slo != fst);
      fst = 0;
      cout << slo << " " << fst << endl;
      while (slo != fst)
      {
         slo = nums[slo];
         fst = nums[fst];
      }
      return fst;
   }
};
