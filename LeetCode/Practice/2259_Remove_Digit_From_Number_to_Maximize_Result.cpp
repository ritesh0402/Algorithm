class Solution
{
public:
    string removeDigit(string number, char digit)
    {
        int last = 0;
        for (int i = 0; i < number.length(); i++)
        {
            if (number[i] == digit)
            {
                last = i;
                if (i != number.length() - 1 && number[i] < number[i + 1])
                {
                    return number.substr(0, i) + number.substr(i + 1, number.length());
                }
                else if (i == number.length() - 1)
                {
                    return number.substr(0, i);
                }
            }
        }
        if (last != number.length() - 1)
        {
            return number.substr(0, last) + number.substr(last + 1, number.length());
        }
        return number;
    }
};