class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        vector<vector<int>> ans;
        for(auto &x: points){
            pq.push({ ((x[0]*x[0]) + (x[1]*x[1])), {x[0], x[1]}});
        }
        for(int i=0; i<k; i++){
            // cout << pq.top().second.first << endl;
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};