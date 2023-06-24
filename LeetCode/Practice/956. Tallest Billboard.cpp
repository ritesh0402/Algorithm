class Solution
{
public:
   int tallestBillboard(vector<int> &rods)
   {
      vector<vector<int>> dp(rods.size(), vector<int>(5005, -1));
      if (rods.size() <= 1)
         return 0;
      return chooseRod(0, 0, 0, rods, dp) / 2;
   }

   int chooseRod(int index, int rod1, int rod2, vector<int> &rods, vector<vector<int>> &dp)
   {
      if (index == rods.size())
      {
         if (rod1 == rod2)
         {
            return 0;
         }
         return -1e5;
      }

      if (dp[index][abs(rod1 - rod2)] != -1)
         return dp[index][abs(rod1 - rod2)];
      // cout << key << endl;

      int first = rods[index] + chooseRod(index + 1, rod1 + rods[index], rod2, rods, dp);
      int second = rods[index] + chooseRod(index + 1, rod1, rod2 + rods[index], rods, dp);
      int third = chooseRod(index + 1, rod1, rod2, rods, dp);

      return dp[index][abs(rod1 - rod2)] = max(first, max(second, third));
   }
};