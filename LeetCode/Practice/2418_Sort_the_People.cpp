class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<pair<int, string>> vp;

        for (int i = 0; i < names.size(); i++)
        {
            vp.push_back({heights[i], names[i]});
        }

        sort(vp.begin(), vp.end());
        vector<string> ans;

        for (int i = 0; i < names.size(); i++)
        {
            ans.push_back(vp[vp.size() - 1 - i].second);
        }
        return ans;
    }
};