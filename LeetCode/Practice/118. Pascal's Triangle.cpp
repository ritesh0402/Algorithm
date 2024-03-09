// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> result;
//         vector<int> prevRow;

//         for (int i = 0; i < numRows; i++) {
//             vector<int> currentRow(i + 1, 1);

//             for (int j = 1; j < i; j++) {
//                 currentRow[j] = prevRow[j - 1] + prevRow[j];
//             }

//             result.push_back(currentRow);
//             prevRow = currentRow;
//         }

//         return result;
//     }
// };

class Solution
{
public:
   vector<vector<int>> generate(int numRows)
   {
      vector<vector<int>> pt;
      for (int row = 0; row < numRows; row++)
      {
         int ans = 1;
         pt.push_back(vector<int>());
         pt[row].push_back(ans);
         for (int col = 1; col < row + 1; col++)
         {
            ans *= (row - col + 1);
            ans /= (col);
            pt[row].push_back(ans);
         }
      }
      return pt;
   }
};

// eg 5th row: 1 5 10 10 5 1
// 1/1  5/1  5*4/1*2  5*4*3/1*2*3  5*4*3*2/1*2*3*4  5*4*3*2*1/1*2*3*4*5