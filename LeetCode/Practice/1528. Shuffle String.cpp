class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        char ans[101] = {};
        for (int i = 0; i < s.length(); i++)
        {
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};