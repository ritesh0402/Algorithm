class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        int cnt=0;
        for(int i=arr.size()-1; i>=0; i--){
            cnt = ( ( ( i+1 ) *  (arr.size() - i) + 1 ) /2 );
            ans += arr[i] * cnt;
            // (((i + 1) * (arr.length - i) + 1) / 2) * arr[i]
        }
        return ans;
    }
}; 

