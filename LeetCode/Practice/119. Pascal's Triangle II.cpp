class Solution
{
public:
   vector<int> getRow(int rowIndex)
   {
      vector<int> pr;
      long long ans = 1;
      pr.push_back(ans);
      for (int col = 1; col < rowIndex + 1; col++)
      {
         ans *= (rowIndex + 1 - col);
         ans /= col;
         pr.push_back(ans);
      }
      return pr;
   }
};