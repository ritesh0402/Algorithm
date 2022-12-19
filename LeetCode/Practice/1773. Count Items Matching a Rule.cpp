class Solution {
public:
    // int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    //     int ans=0;
    //     unordered_map<string, int> ump;

    //     ump["type"] += 0;
    //     ump["color"] += 1;
    //     ump["name"] += 2;
        
    //     for(auto &x: items){
    //         if(x[ump.at(ruleKey)] == ruleValue){
    //             ans++;
    //         }
    //     }
    //     return ans;
    // }

    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans=0;
        int rule=0;
        if(ruleKey == "color"){
            rule = 1;
        }else if(ruleKey == "name"){
            rule = 2;
        }
        
        for(auto &x: items){
            if(x[rule] == ruleValue){
                ans++;
            }
        }
        return ans;
    }
};