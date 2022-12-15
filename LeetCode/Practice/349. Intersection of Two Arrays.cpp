// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int, int> ump;
//         vector<int> ans;
//         for(int &x: nums1){
//             if(ump.find(x)==ump.end()){
//                 ump[x]++;
//             }
//         }
//         for(int &y: nums2){
//             if(ump.find(y)!=ump.end()){
//                 ump[y]++;
//                 // cout << y << " " << ump.at(y) << endl;
//             }
//         }
//         for(auto &z: ump){
//             if(z.second >= 2){
//                 ans.push_back(z.first);
//             }
//         }
//         return ans;
//     }
// };

class Solution
{
public:
   vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
   {
      int arr[1001] = {0};
      vector<int> ans;
      for (int &x : nums1)
      {
         if (arr[x] == 0)
         {
            arr[x]++;
            // cout << x << " " << arr[x] << endl;
         }
      }
      // cout << "break" << endl;
      for (int &y : nums2)
      {
         if (arr[y] == 1)
         {
            ans.push_back(y);
            arr[y]++;
            // cout << y << " " << arr[y] << endl;
         }
      }
      return ans;
   }
};