// class Solution {
// public:
//     int mySqrt(int x) {
//         long long i=0;
//         while((i+1)*(i+1) <= x){
//             i++;
//         }
//         return i;
//     }
// };

class Solution
{
public:
   int mySqrt(int x)
   {
      int l = 0, h = x;
      while (l < h)
      {
         long long mid = l + (((long int)h - l + 1) / 2);
         long long sq = mid * mid;
         if (sq > x)
         {
            h = mid - 1;
         }
         else if (sq <= x)
         {
            l = mid;
         }
      }
      return l;
   }
};