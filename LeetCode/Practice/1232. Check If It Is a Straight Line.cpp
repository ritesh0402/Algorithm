// class Solution
// {
// public:
//    bool checkStraightLine(vector<vector<int>> &coordinates)
//    {

//       if (coordinates[1][0] - coordinates[0][0] == 0)
//       {
//          for (int i = 0; i < coordinates.size(); i++)
//          {
//             if (coordinates[i][0] != coordinates[0][0])
//                return false;
//          }
//          return true;
//       }
//       else if (coordinates[1][1] - coordinates[0][1] == 0)
//       {
//          for (int i = 0; i < coordinates.size(); i++)
//          {
//             if (coordinates[i][1] != coordinates[0][1])
//                return false;
//          }
//          return true;
//       }
//       double slope = double(coordinates[1][1] - coordinates[0][1]) / double(coordinates[1][0] - coordinates[0][0]);

//       for (int i = 2; i < coordinates.size(); i++)
//       {
//          if (slope != double(coordinates[i][1] - coordinates[0][1]) / double(coordinates[i][0] - coordinates[0][0]))
//          {
//             return false;
//          }
//       }
//       return true;
//    }
// };

class Solution
{
public:
   bool checkStraightLine(vector<vector<int>> &coordinates)
   {
      int x1 = coordinates[0][0];
      int x2 = coordinates[1][0];
      int y1 = coordinates[0][1];
      int y2 = coordinates[1][1];
      for (int i = 2; i < coordinates.size(); i++)
      {
         if ((y2 - y1) * (coordinates[i][0] - x1) != (x2 - x1) * (coordinates[i][1] - y1))
         {
            return false;
         }
      }
      return true;
   }
};