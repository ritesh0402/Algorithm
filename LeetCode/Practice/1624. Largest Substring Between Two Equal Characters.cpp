class Solution
{
public:
   int maxLengthBetweenEqualCharacters(string s)
   {
      int len = 0;
      bool ifAny = false;
      int firstInd[26];
      memset(firstInd, -1, sizeof(firstInd));
      for (int i = 0; i < s.length(); i++)
      {
         if (firstInd[s[i] - 'a'] == -1)
            firstInd[s[i] - 'a'] = i;
      }

      for (int j = s.length() - 1; j >= 0; j--)
      {
         if (len <= j - firstInd[s[j] - 'a'] - 1)
         {
            len = j - firstInd[s[j] - 'a'] - 1;
            ifAny = true;
         }
      }
      return ifAny ? len : -1;
   }
};

// class Solution {
// public:
//     int maxLengthBetweenEqualCharacters(std::string s) {
//         int current = s.length() - 1;
//         for (int i = s.length() - 1; i > 0; i--) {
//             for (int j = 0; j + i < s.length(); j++) {
//                 if (s[j] == s[j + i]) {
//                     return i - 1;
//                 }
//             }
//             current--;
//         }
//         return -1;
//     }
// };