class Solution
{
public:
   vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
   {
      ios::sync_with_stdio(0);
      vector<bool> res;

      for (int i = 0; i < l.size(); i++)
      {
         bool ret = IsArithmetic(nums, l[i], r[i]);
         res.push_back(ret);
      }

      return res;
   }

   bool IsArithmetic(vector<int> &nums, int st, int en)
   {
      vector<int> v(nums.begin() + st, nums.begin() + en + 1);
      sort(v.begin(), v.end());
      int diff = v[1] - v[0];
      for (int i = 2; i < v.size(); i++)
         if ((v[i] - v[i - 1]) != diff)
            return false;

      return true;
   }
};