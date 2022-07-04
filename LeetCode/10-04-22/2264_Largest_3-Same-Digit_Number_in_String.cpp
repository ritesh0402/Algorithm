class Solution
{
public:
    string largestGoodInteger(string num)
    {
        for (int j = 0; j < num.length() - 3; j++)
        {
            string rem = "000";

            if (num[j] == num[j + 1] && num[j + 1] == num[j + 2] && stoi(rem) < stoi(num.substr(j, j + 3)))
            {
                rem = num.substr(j, j + 3);
            }
        }
        return rem;
    }
};