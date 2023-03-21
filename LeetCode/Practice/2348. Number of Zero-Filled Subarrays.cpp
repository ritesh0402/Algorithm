class Solution
{
public:
   long long zeroFilledSubarray(vector<int> &nums)
   {
      long long cnt = 0, ans = 0;
      for (int i = 0; i < nums.size(); i++)
      {
         if (nums[i] == 0)
         {
            cnt++;
            if (i == nums.size() - 1)
               ans += cnt * (cnt + 1) / 2;
            ;
         }
         else if (cnt > 0)
         {
            ans += cnt * (cnt + 1) / 2;
            cnt = 0;
         }
      }
      return ans;
   }
};
// counting continuous zeros
// for each set of continuous zeros n: ans+=n*(n+1)/2
