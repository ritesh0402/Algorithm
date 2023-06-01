// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         int j=0;
//         sort(intervals.begin(), intervals.end());
//         for(int i=1; i<intervals.size(); i++){
//             if(intervals[j][1] >= intervals[i][0]){
//                 // intervals[j][0] = min(intervals[j][0], intervals[i][0]);
//                 while(i<intervals.size()-1 && intervals[j+1][1] > intervals[i][1]){
//                     // i++;
//                     intervals.erase(intervals.begin()+i);
//                 }
//                 intervals[j][1] = max(intervals[j][1], intervals[i][1]);
//                 intervals.erase(intervals.begin()+i);
//                 i--;
//             }else{
//                 j++;
//             }
//         }
//         return intervals;
//     }
// };

class Solution
{
public:
   vector<vector<int>> merge(vector<vector<int>> &intervals)
   {
      int l = 0;
      sort(intervals.begin(), intervals.end());
      for (int i = 0; i < intervals.size(); ++i)
      {
         if (intervals[l][1] >= intervals[i][0])
         {
            intervals[l][1] = max(intervals[l][1], intervals[i][1]);
         }
         else
         {
            l++;
            intervals[l] = intervals[i];
         }
      }
      intervals.resize(l + 1);
      return move(intervals);
   }
};