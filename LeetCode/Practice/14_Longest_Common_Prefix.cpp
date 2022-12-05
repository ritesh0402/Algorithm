class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int i = 0;
        while (true)
        {
            for (int j = 0; j < strs.size(); j++)
            {
                if (i > strs[j].length() || strs[j][i] != strs[0][i])
                {
                    return strs[j].substr(0, i);
                }
            }
            i++;
        }
    }
};