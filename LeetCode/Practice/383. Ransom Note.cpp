class Solution
{
public:
   bool canConstruct(string ransomNote, string magazine)
   {
      int arr[26] = {0};
      for (auto &x : magazine)
      {
         arr[x - 97]++;
      }
      for (auto &y : ransomNote)
      {
         if (arr[y - 97] == 0)
         {
            return false;
         }
         else
         {
            arr[y - 97]--;
         }
      }
      return true;
   }
};