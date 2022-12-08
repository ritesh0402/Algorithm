class Solution
{
public:
    int minCostToMoveChips(vector<int> &position)
    {
        int esum = 0, osum = 0;

        for (int x : position)
        {
            if (x & 1 == 1)
                esum++;
            else
                osum++;
        }
        if (esum > osum)
            return osum;
        return esum;
        // return min(esum, osum);
    }
};
