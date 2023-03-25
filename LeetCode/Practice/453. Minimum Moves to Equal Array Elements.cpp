class Solution
{
public:
   int minMoves(vector<int> &nums)
   {
      int m = INT_MAX, ans = 0;
      for (int &x : nums)
         m = min(m, x);
      for (int &y : nums)
         ans += y - m;
      return ans;
   }
};

// class Solution
// {
// public:
//    int minMoves(vector<int> &nums)
//    {
//       int m = *min_element(nums.begin(), nums.end()), ans = 0;
//       for (int &y : nums)
//          ans += y - m;
//       return ans;
//    }
// };