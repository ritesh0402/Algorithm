
class Solution
{
public:
   bool canPlaceFlowers(vector<int> &flowerbed, int n)
   {
      flowerbed.insert(flowerbed.begin(), 0);
      flowerbed.push_back(0);

      for (int i = 1; i < flowerbed.size() - 1; ++i)
      {
         if (flowerbed[i - 1] + flowerbed[i] + flowerbed[i + 1] == 0)
         {
            n--;
            ++i;
         }
      }
      return n <= 0;
   }
};

class Solution
{
public:
   bool canPlaceFlowers(vector<int> &flowerbed, int n)
   {
      for (int i = 0; i < flowerbed.size(); i++)
      {
         if (flowerbed[i] == 0)
         {
            if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
            {
               n--;
               flowerbed[i] = 1;
            }
         }
      }
      return n <= 0;
   }
};