class Solution
{
public:
   bool squareIsWhite(string coordinates)
   {
      if ((coordinates[0] - 96) % 2 == (coordinates[1] - 48) % 2)
      {
         return false;
      }
      return true;
   }
};