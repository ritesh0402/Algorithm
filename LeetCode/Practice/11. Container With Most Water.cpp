// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxi=0;
//         for(int i=0; i<height.size(); i++){
//             for(int j=i+1; j<height.size(); j++){
//                 maxi = max(maxi, min(height[i], height[j])*(j-i));
//             }
//         }
//         return maxi;
//     }
// };

class Solution
{
public:
   int maxArea(vector<int> &height)
   {
      int maxi = 0;
      int l = 0, h = height.size() - 1;
      while (l < h)
      {
         if (height[l] > height[h])
         {
            maxi = max(maxi, height[h] * (h - l));
            h--;
         }
         else
         {
            maxi = max(maxi, height[l] * (h - l));
            l++;
         }
      }
      return maxi;
   }
};