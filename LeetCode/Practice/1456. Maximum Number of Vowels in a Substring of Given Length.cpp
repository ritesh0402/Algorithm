// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         int i=0, j=0, ans=0, count=0;
//         set<int> set({'a','e','i','o','u'});
//         while(j<s.length()){
//             if(j<k){
//                 if(set.find(s[j])!=set.end()){
//                     count++;
//                 }
//             }else{
//                 if(set.find(s[i])!=set.end()){
//                     count--;
//                 }
//                 if(set.find(s[j])!=set.end()){
//                     count++;
//                 }
//                 i++;
//             }
//             j++;
//             ans = max(ans, count);
//         }
//         return ans;
//     }
// };

class Solution
{
public:
    int maxVowels(string s, int k)
    {
        int i = 0, j = 0, ans = 0, count = 0;
        unordered_set<int> set({'a', 'e', 'i', 'o', 'u'});

        while (j < k)
        {
            if (set.find(s[j]) != set.end())
            {
                count++;
            }
            j++;
            ans = max(ans, count);
        }

        while (j < s.length())
        {
            if (set.find(s[i]) != set.end())
            {
                count--;
            }
            if (set.find(s[j]) != set.end())
            {
                count++;
            }
            i++;
            j++;
            ans = max(ans, count);
        }
        return ans;
    }
};
