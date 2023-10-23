// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         if(n < 1) return false;
//         while(n%4 == 0){
//             n/=4;
//         }
//         return n==1;
//     }
// };

class Solution
{
public:
   bool isPowerOfFour(int num)
   {
      if (num < 0)
         return false;
      for (int i = 0; i < 32; i += 2)
         if (num == 1 << i)
            return true;
      return false;
   }
};