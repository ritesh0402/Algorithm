class Solution
{
public:
   bool isAnagram(string s, string t)
   {
      int us[26] = {0};
      if (s.length() != t.length())
         return false;
      for (auto &x : s)
      {
         us[x - 'a']++;
      }
      for (auto &x : t)
      {
         if (us[x - 'a'] == 0)
            return false;
         us[x - 'a']--;
      }
      return true;
   }
};