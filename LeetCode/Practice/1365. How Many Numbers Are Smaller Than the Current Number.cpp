class Solution
{
public:
   vector<int> smallerNumbersThanCurrent(vector<int> &nums)
   {
      int n = nums.size();
      if (n == 0)
      {
         return {};
      }

      vector<int> v(nums.begin(), nums.end());
      sort(v.begin(), v.end());
      unordered_map<int, int> m;
      m[v[0]] = 0;
      int temp = v[0];
      for (int i = 1; i < n; i++)
      {
         if (temp == v[i])
         {
            continue;
         }
         else
         {
            temp = v[i];
            m[v[i]] = i;
         }
      }
      v.clear();
      for (int &x : nums)
      {
         v.push_back(m[x]);
      }
      return v;
   }
};
