class Solution
{
public:
   vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
   {
      vector<vector<int>> ans({{}, {}});
      // ans.push_back({});
      // ans.push_back({});
      int arr[2002];
      memset(arr, 0, sizeof(arr));

      for (int &x : nums1)
      {
         arr[x + 1000] = 1000;
      }
      for (int &y : nums2)
      {
         arr[y + 1000] += 3;
      }

      for (int i = 0; i < 2002; i++)
      {
         if (arr[i] == 1000)
         {
            ans[0].push_back(i - 1000);
         }
         else if (arr[i] != 0 && arr[i] % 3 == 0)
         {
            ans[1].push_back(i - 1000);
         }
      }
      return ans;
   }
};