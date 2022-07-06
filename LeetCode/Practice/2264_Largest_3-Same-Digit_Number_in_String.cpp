class Solution
{
public:
    string largestGoodInteger(string num)
    {
        string rem = "000";
        bool flag = true;
        for (int j = 0; j < num.length() - 2; j++)
        {

            if (num[j] == num[j + 1] && num[j + 1] == num[j + 2] && stoi(rem) <= stoi(num.substr(j, 3)))
            {
                rem = num.substr(j, 3);
                flag = false;
            }
        }
        if (flag)
        {
            return "";
        }
        return rem;
    }
};