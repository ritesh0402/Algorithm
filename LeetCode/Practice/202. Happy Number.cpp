// class Solution {
// public:
//     int happyNum(int n){
//         int sum = 0;
//         while(n>0){
//             sum += pow(n%10, 2);
//             n/=10;
//         }
//         return sum;
//     }
//     bool isHappy(int n) {
//         set<int> s;
//         while(true){
//             n = happyNum(n);
//             if(n == 1){
//                 return true;
//             }
//             if(s.find(n) != s.end()){
//                 return false;
//             }
//             s.insert(n);
//         }
//     }
// };

class Solution {
public:
    
    bool isHappy(int n) {
        unordered_set<int> us;
        while(true){
            int sum = 0;
            while(n>0){
                sum += pow(n%10, 2);
                n/=10;
            }
            n = sum;
            if(n == 1){
                return true;
            }
            if(us.find(n) != us.end()){
                return false;
            }
            us.insert(n);
        }
    }
};