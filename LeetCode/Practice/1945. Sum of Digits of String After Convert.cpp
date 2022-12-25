// class Solution {
// public:
//     long long digiSum(long long &x){
//         long long ans = 0;
//         while(x>0){
//             ans += x%10;
//             x /= 10;
//         }
//         return ans;
//     }

//     int getLucky(string s, int k) {
//         long long ans = 0;
//         for(char &x: s){
//             if(x - 96 > 9){
//                 ans*=100;
//             }else{
//                 ans*=10;
//             }
//             ans += x-96;
//         }
//         while(k>0){
//             ans = digiSum(ans);
//             k--;
//         }
//         return ans;
//     }
// };

class Solution
{
public:
   int digiSum(int &x)
   {
      int ans = 0;
      while (x > 0)
      {
         ans += x % 10;
         x /= 10;
      }
      return ans;
   }

   int getLucky(string s, int k)
   {
      int sum = 0;
      for (char &x : s)
      {
         x -= 96;
         while (x > 0)
         {
            sum += x % 10;
            x /= 10;
         }
      }
      k--;
      while (k > 0)
      {
         sum = digiSum(sum);
         k--;
      }
      return sum;
   }
};

// class Solution {
// public:

//     int getLucky(string s, int k) {
//         int sum = 0;
//         int temp = 0;
//         for(char &x: s){
//             x-=96;
//             while(x>0){
//                 sum += x%10;
//                 x /= 10;
//             }
//         }
//         k--;
//         while(k>0){
//             temp = 0;
//             while(sum>0){
//                 temp += sum%10;
//                 sum /= 10;
//             }
//             sum = temp;
//             k--;
//         }
//         return sum;
//     }
// };