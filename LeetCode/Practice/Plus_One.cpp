class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int target = 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (i >= 0 && digits[i] < 9)
            {
                digits[i]++;
                break;
            }
            else if (i == 0 && digits[i] == 9)
            {
                digits[i] = 0;
                digits.insert(digits.begin(), target);
            }
            else
            {
                digits[i] = 0;
            }
        }
        return digits;
    }
};