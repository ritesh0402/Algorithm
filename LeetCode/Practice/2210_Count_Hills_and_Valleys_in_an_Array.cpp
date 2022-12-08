class Solution
{
public:
    int countHillValley(vector<int> &nums)
    {
        int b = 0, f = 0, c = 0, ans = 0;
        for (int i = 1; i < nums.size() - 1; i++)
        {
            c = i;
            b = i - 1;

            while (c < nums.size() - 1 && nums[b] == nums[c])
            {
                // cout << "0 ";
                c = ++i;
                b = i - 1;
            }
            f = i + 1;

            // cout << "1 " ;
            if (f < nums.size() - 1 && nums[c] == nums[f])
            {
                while (nums[c] == nums[f])
                {
                    // cout << "2 " ;
                    f++;
                    i++;
                }
                i--;
            }
            // cout << "3 ";
            if (f < nums.size() && ((nums[c] > nums[b] && nums[c] > nums[f]) || (nums[c] < nums[b] && nums[c] < nums[f])))
            {
                ans++;
                // cout << "4 " << "(" << nums[b] << " " << nums[c] << " " << nums[f] << ") " ;
            }
            // cout << "5" << endl;
        }
        return ans;
    }
    //     int countHillValley(vector<int>& nums) {
    //         int f = 0, s = 0, t = 0, temp=0, ans = 0;
    //         while(t<nums.size()){
    //             while(nums[f] == nums[temp]){
    //                 temp++;
    //             }
    //             f = temp;
    //             s = f+1;
    //             temp = s+1;
    //             while(nums[s] == nums[temp]){
    //                 temp++;
    //             }
    //             s = temp;
    //             t = s+1;
    //             temp = t+1;
    //             while(nums[t] == nums[temp]){
    //                 temp++;
    //             }
    //             t = temp;
    //             if( (s>f && s>t) || (s<f && s<t) ){
    //                 ans++;
    //             }
    //             f = t+1;
    //         }

    //         return ans;
    //     }
};