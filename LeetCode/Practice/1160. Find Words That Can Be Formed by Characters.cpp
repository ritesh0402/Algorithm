class Solution
{
public:
   int countCharacters(vector<string> &words, string chars)
   {
      int ans = 0;
      bool add = true;
      unordered_map<char, int> ump, cpy;
      for (char &x : chars)
      {
         ump[x]++;
      }
      for (string &y : words)
      {
         add = true;
         cpy = ump;
         for (char &z : y)
         {
            if (cpy.find(z) == cpy.end() || cpy.find(z)->second == 0)
            {
               add = false;
               break;
            }
            cpy.find(z)->second--;
         }
         if (add)
            ans += y.length();
      }
      return ans;
   }
};