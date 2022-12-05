class Solution
{
public:
    // int minimumCost(vector<int>& cost) {
    //     int ans=0, i=0;
    //     sort(cost.begin(), cost.end());
    //     for(i=cost.size()-1; i>1; i-=3){
    //         ans += cost[i] + cost[i-1] ;
    //     }
    //     if(i==4 || i==1){
    //         ans += cost[0]+cost[1];
    //     }else if(i==0){
    //         ans += cost[0];
    //     }
    //     return ans;
    // }

    int minimumCost(vector<int> &A)
    {
        sort(A.begin(), A.end());
        int res = 0, n = A.size();
        for (int i = 0; i < A.size(); ++i)
            if (i % 3 != n % 3)
                res += A[i];
        return res;
    }
};