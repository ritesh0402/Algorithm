class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        int ans = 0, n = piles.size();
        // int count=0;
        sort(piles.begin(), piles.end());
        // cout << "1 ";
        // for(int i=piles.size()-2; i>count; i-=2){
        //     // cout << "2 ";
        //     ans += piles[i];
        //     count++;
        //     // cout << piles[i] << " " << count << endl;
        // }

        for (int i = n / 3; i < n; i += 2)
        {
            ans += piles[i];
        }
        return ans;
    }
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    }
};