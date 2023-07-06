class Solution
{
public:
   int numMatchingSubseq(string s, vector<string> &words)
   {
      int count = 0;
      for (int i = 0; i < words.size(); i++)
      {
         if (isSubsequence(words[i], s))
         {
            count++;
         }
      }
      return count;
   }

   bool isSubsequence(string s, string t)
   {
      int i = 0, j = 0;
      while (i < s.length() && j < t.length())
      {
         if (s[i] == t[j])
            i++;
         j++;
      }
      return i == s.length();
   }
};