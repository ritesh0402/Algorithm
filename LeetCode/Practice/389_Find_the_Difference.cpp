// class Solution
// {
// public:
//     char findTheDifference(string s, string t)
//     {
//         for (int i = 0; i < s.size(); i++)
//         {
//             t[i + 1] += t[i] - s[i];
//         }
//         return t[t.size() - 1];
//     }
// };

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int i = 0;
        char ans = t[i];
        for (i; i < s.length(); i++)
        {
            ans += t[i + 1] - s[i];
        }
        return ans;
    }
};