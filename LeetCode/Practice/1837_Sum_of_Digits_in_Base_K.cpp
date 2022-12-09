class Solution {
public:
    int sumBase(int n, int k) {
        int ans=0;
        while(n > 0){
            // ans += n%k;
            ans += n - ( (n/k) * k );
            n/=k;
            // cout << ans << " " << n << endl;
        }
        return ans+n;
    }
};