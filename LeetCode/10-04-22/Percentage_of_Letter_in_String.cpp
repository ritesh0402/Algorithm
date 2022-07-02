class Solution
{
public:
    int percentageLetter(string s, char letter)
    {
        int co = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == letter)
            {
                co++;
            }
        }
        return (int)(co * 100 / s.length());
    }
};