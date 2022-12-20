class Solution
{
public:
   void marker(int arr[], vector<vector<int>> &rooms, int roomToVisit)
   {
      if (roomToVisit < rooms.size())
      {
         arr[roomToVisit] = 1;
         // cout << " m " << roomToVisit << endl;
         for (int &x : rooms[roomToVisit])
         {
            // cout << "x" << x << endl;
            if (arr[x] == 0)
            {
               marker(arr, rooms, x);
            }
         }
      }
   }

   bool canVisitAllRooms(vector<vector<int>> &rooms)
   {
      int arr[rooms.size()];
      memset(arr, 0, sizeof(arr));
      // arr[0] = 1;
      marker(arr, rooms, 0);
      for (int &z : arr)
      {
         // cout << z << " " << arr[z] << endl;
         if (z == 0)
         {
            return false;
         }
      }
      return true;
   }
};