// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int cnt = arr[0]-1, i=0, j=1;
//         if(k <= cnt){
//             return  k;
//         }else{
//             while(j < arr.size()){
//                 cout << arr[i] << " " << arr[j] << " " << cnt << endl;
//                 if(arr[j] - arr[i] == 1){
//                     i++;
//                     j++;
//                 }else if(arr[j] - arr[i] != 1 && cnt < k){
//                     if(cnt + arr[j] - arr[i] -1 > k){
//                         return arr[i] + k - cnt;
//                     }else{
//                         cnt += arr[j] - arr[i] -1;
//                         i = j++;
//                     }
//                 }
//             }
//         }
//         return arr[j-1] + k - cnt;
//     }
// };

class Solution
{
public:
   int findKthPositive(vector<int> &arr, int k)
   {
      int curr = 1;
      for (int i = 0; i < arr.size(); i++)
      {
         if (arr[i] == curr)
         {
            curr++;
            continue;
         }
         k -= arr[i] - curr;
         curr = arr[i] + 1;
         if (k <= 0)
            return arr[i] + k - 1;
      }
      return arr.back() + k;
   }
};