class Solution
{
public:
   vector<vector<int>> threeSum(vector<int> &nums)
   {
      sort(nums.begin(), nums.end());
      if (nums.size() < 3)
      {
         return {};
      }
      if (nums[0] > 0)
      {
         return {};
      }
      vector<vector<int>> answer;
      for (int i = 0; i < nums.size(); ++i)
      {
         if (nums[i] > 0)
         {
            break;
         }
         if (i > 0 && nums[i] == nums[i - 1])
         {
            continue;
         }
         int l = i + 1, h = nums.size() - 1;
         int sum = 0;
         while (l < h)
         {
            sum = nums[i] + nums[l] + nums[h];
            if (sum > 0)
            {
               h--;
            }
            else if (sum < 0)
            {
               l++;
            }
            else
            {
               answer.push_back({nums[i], nums[l], nums[h]});
               int prevLast = nums[l], prevHigh = nums[h];
               while (l < h && nums[l] == prevLast)
               {
                  l++;
               }
               while (l < h && nums[h] == prevHigh)
               {
                  h--;
               }
            }
         }
      }
      return answer;
   }
};