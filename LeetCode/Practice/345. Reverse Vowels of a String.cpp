class Solution
{
public:
   string reverseVowels(string &s)
   {
      unordered_map<char, int> ump;
      ump['a']++;
      ump['e']++;
      ump['i']++;
      ump['o']++;
      ump['u']++;
      ump['A']++;
      ump['E']++;
      ump['I']++;
      ump['O']++;
      ump['U']++;
      int i = 0, j = s.length() - 1;
      while (i < j)
      {
         for (i; ump.find(s[i]) == ump.end() && i < j; i++)
         {
         }
         for (j; ump.find(s[j]) == ump.end() && i < j; j--)
         {
         }
         // cout << i << " " << j << " " << s << endl;
         swap(s[i++], s[j--]);
      }
      return s;
   }
};