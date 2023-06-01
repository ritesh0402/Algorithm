// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         for(int i=0; i<matrix.size(); i++){
//             if(target <= matrix[i][matrix[i].size()-1]){
//                 for(int j=0; j<matrix[i].size(); j++){
//                     if(target == matrix[i][j]) return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

class Solution
{
public:
   bool searchMatrix(vector<vector<int>> &matrix, int target)
   {
      int row = matrix.size();
      int col = matrix[0].size();
      int s = 0;
      int e = row * col - 1;
      while (s <= e)
      {
         int mid = s + (e - s) / 2;
         int ele = matrix[mid / col][mid % col];
         if (ele == target)
         {
            return true;
         }
         if (ele < target)
         {
            s = mid + 1;
         }
         else
         {
            e = mid - 1;
         }
      }
      return false;
   }
};

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         for(int i=0; i<matrix.size(); i++){
//             if(target <= matrix[i][matrix[i].size()-1]){
//                 int lo=0;
//                 int hi=matrix[i].size()-1;
//                 while(lo<=hi){
//                     int mid = (lo+hi)/2;
//                     if(target == matrix[i][mid]){
//                         return true;
//                     }
//                     if(target < matrix[i][mid]){
//                         hi = mid - 1;
//                     }else{
//                         lo = mid + 1;
//                     }
//                 }
//                 break;
//             }
//         }
//         return false;
//     }
// };