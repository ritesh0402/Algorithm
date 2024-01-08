class Solution
{
public:
   bool isPathCrossing(string path)
   {
      set<pair<int, int>> visited;
      visited.insert({0, 0});
      int x = 0;
      int y = 0;

      for (char move : path)
      {
         if (move == 'N')
            y++;
         else if (move == 'S')
            y--;
         else if (move == 'W')
            x--;
         else
            x++;
         if (visited.find({x, y}) != visited.end())
         {
            return true;
         }
         visited.insert({x, y});
      }
      return false;
   }
};