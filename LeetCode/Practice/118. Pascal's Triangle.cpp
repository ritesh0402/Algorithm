class Solution
{
public:
   vector<vector<int>> generate(int numRows)
   {
      vector<vector<int>> pt;
      for (int row = 1; row <= numRows; row++)
      {
         int ans = 1;
         pt.push_back(vector<int>());
         pt[row - 1].push_back(ans);
         for (int col = 2; col <= row; col++)
         {
            ans *= (row - col + 1);
            ans /= (col - 1);
            pt[row - 1].push_back(ans);
            // cout << row << " " << col << endl;
         }
      }
      return pt;
   }
};