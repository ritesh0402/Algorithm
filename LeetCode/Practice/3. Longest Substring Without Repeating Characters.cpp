// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         if(s.length()==0) return 0;
//         unordered_map<char, int> ump;
//         ump[s[0]] = 0;
//         int maxi=1;
//         int i=0, j=1;
//         while(j<s.length()){
//             if(ump.find(s[j]) != ump.end()){
//                 int temp = ump[s[j]] + 1;
//                 for(int k=i; k<ump[s[j]]+1; k++){
//                     ump.erase(s[k]);
//                 }
//                 i = temp;
//             }
//             ump[s[j]] = j;
//             j++;
//             // cout << i << " " << j << endl;
//             maxi = max(maxi, j-i);
//         }
//         return maxi;
//     }
// };

class Solution
{
public:
   int lengthOfLongestSubstring(string s)
   {
      if (s.length() == 0)
         return 0;
      vector<int> ump(256, -1);
      ump[s[0]] = 0;
      int maxi = 1;
      int i = 0, j = 1;
      while (j < s.length())
      {
         if (ump[s[j]] != -1)
         {
            int temp = ump[s[j]] + 1;
            for (int k = i; k < ump[s[j]] + 1; k++)
            {
               ump[s[k]] = -1;
            }
            i = temp;
         }
         ump[s[j]] = j;
         j++;
         // cout << i << " " << j << endl;
         maxi = max(maxi, j - i);
      }
      return maxi;
   }
};