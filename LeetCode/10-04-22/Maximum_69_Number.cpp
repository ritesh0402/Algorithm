class Solution
{
public:
    int maximum69Number(int num)
    {
        string s = to_string(num);
        int i = 0;
        while (i < s.length() && s[i] == '9')
        {
            i++;
        }
        if (i < s.length())
        {
            s[i] = '9';
        }
        return stoi(s);
    }
};