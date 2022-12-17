class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans=0, i=0, j=people.size()-1;
        sort(people.begin(), people.end());
        while(i<=j){
            if(people[j]>limit){
                // cout << "case1" << " " << people[j] << endl;
                j--;
                continue;
            }
            else if(people[i]+people[j] <= limit){
                i++;
                j--;
                // cout << "case2" << endl;
            }else{
                j--;
                // cout << "case3" << endl;
            }
            ans++;
        }
        return ans;
    }
};