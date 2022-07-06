class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int res = -1;
        int hay = haystack.length();
        int nee = needle.length();
        if (hay < nee)
        {
            return -1;
        }
        else
        {
            for (int i = 0; i < hay; i++)
            {
                if (haystack[i] == needle[0])
                {
                    for (int j = 0; j < nee; j++)
                    {
                        if (haystack[i + j] != needle[j])
                        {
                            res = -1;
                            break;
                        }
                        else
                        {
                            res = 1;
                        }
                    }
                    if (res == 1)
                    {
                        return i;
                    }
                }
            }
            return -1;
        }
    }
};