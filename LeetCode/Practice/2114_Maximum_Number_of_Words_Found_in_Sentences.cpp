// #include <bits/stdc++.h>
// #include <string.h>
// class Solution {
// public:
//     int mostWordsFound(vector<string>& sentences) {
//         int ans = 0;
//         int sum = 0;
//         for(int i=0; i<sentences.size(); i++){
//             sum=0;
//             for(int j=0; j< sentences[i].length(); j++){
//                 if(sentences[i][j] == ' '){
//                     sum++;
//                 }
//             }
//             ans = ans<sum?sum:ans;
//         }
//         return ++ans;

//     }
// };

class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int ans = 0;
        int sum;
        for (string i : sentences)
        {
            sum = 0;
            for (char j : i)
            {
                if (j == ' ')
                {
                    sum++;
                }
            }
            ans = ans < sum ? sum : ans;
        }
        return ++ans;
    }
};