class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int mindiff = arr[1] - arr[0];
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (mindiff > arr[i + 1] - arr[i])
            {
                ans.clear();
                ans.push_back({arr[i], arr[i + 1]});
                mindiff = (arr[i + 1] - arr[i]);
            }
            else if (mindiff == arr[i + 1] - arr[i])
            {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }
        return ans;
    }
};