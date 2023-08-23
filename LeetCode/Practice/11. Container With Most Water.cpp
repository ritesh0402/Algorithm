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