class Solution
{
public:
    double calculateTax(vector<vector<int>> &brackets, int income)
    {
        int i = 0;
        double val = 0, rem = income;
        while (income > brackets[i][0])
        {
            val += ((double)((brackets[i][0] + rem - income) * brackets[i][1]) / 100);
            rem -= brackets[i][0] + rem - income;
            i++;
        }
        val += (double)(rem * brackets[i][1] / 100);
        return val;
    }
};