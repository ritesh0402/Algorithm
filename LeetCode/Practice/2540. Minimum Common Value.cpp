#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")

auto _ = []()
{
   cin.tie(0)->sync_with_stdio(0);
   return 0;
}();

class Solution
{
public:
   int getCommon(vector<int> &nums1, vector<int> &nums2)
   {
      for (int i = 0, j = 0; i < nums1.size() && j < nums2.size();)
      {
         if (nums1[i] == nums2[j])
         {
            return nums1[i];
         }
         else if (nums1[i] < nums2[j])
         {
            i++;
         }
         else
         {
            j++;
         }
      }
      return -1;
   }
};

class Solution
{
public:
   int getCommon(vector<int> &nums1, vector<int> &nums2)
   {
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      int i = 0, j = 0;
      int n = nums1.size(), m = nums2.size();
      while (i < n && j < m)
      {
         if (nums1[i] == nums2[j])
         {
            return nums1[i];
         }
         else if (nums1[i] < nums2[j])
         {
            i++;
         }
         else
         {
            j++;
         }
      }
      return -1;
   }
};