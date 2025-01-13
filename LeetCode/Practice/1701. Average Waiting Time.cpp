// class Solution {
// public:
//     double averageWaitingTime(vector<vector<int>>& customers) {
//         double n = customers.size();
//         double waitTime=0, time=customers[0][0];
//         for(auto &customer: customers){
//             if(time>customer[0]){
//                 waitTime += time-customer[0]+customer[1];
//                 time += customer[1];
//             }else{
//                 waitTime += customer[1];
//                 time = customer[0] + customer[1];
//             }
//         }
//         return waitTime/n;
//     }
// };

class Solution
{
public:
   double averageWaitingTime(vector<vector<int>> &customers)
   {
      double n = customers.size(), waitTime = 0;
      int time = 0;
      for (auto &customer : customers)
      {
         time = max(time, customer[0]) + customer[1];
         waitTime += time - customer[0];
      }
      return waitTime / n;
   }
};