class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        int carr = 0;
        for (int i = 0; i < num.size(); i++)
        {
            carr = (num[num.size() - 1 - i] + k) / 10;
            num[num.size() - 1 - i] = (num[num.size() - 1 - i] + k) % 10;
            if (carr <= 0)
            {
                return num;
            }

            k = carr;
        }
        while (k > 0)
        {
            num.insert(num.begin(), k % 10);
            k /= 10;
        }
        return num;
    }
};
