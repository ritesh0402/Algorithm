class Solution {
public:
    string convert(string s, int numRows) {
        bool downward = true;
        string ans="";
        vector<string> vs(numRows, "");
        int j=0;
        if(numRows==1) return s;
        for(int i=0; i<s.length(); i++){
            if(j==numRows-1) downward = false;
            if(j==0) downward = true;
            vs[j]+=s[i];
            if(downward){
                j++;
            }else{
                j--;
            }
        }
        for(string &x: vs){
            // cout << x << endl;
            ans += x;
        }
        return ans;
    }
};