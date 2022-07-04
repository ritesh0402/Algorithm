class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        int last = 0;

        for (int j = 0; j < k; j++)
        {
            for (int i = 0; i < num.length(); i++)
            {
                if (i != num.length() - 1 && num[i] > num[i + 1])
                {
                    num = num.substr(0, i) + num.substr(i + 1, num.length());
                }
                else if (i == num.length() - 1)
                {
                    num = num.substr(0, i);
                }
            }
        }

        // if (last != num.length() - 1)
        // {
        //     num = num.substr(0, last) + num.substr(last + 1, num.length());
        // }
        return num;
    }
};