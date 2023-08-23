class Solution
{
public:
   string reverseStr(string s, int k)
   {
      for (int i = 0; i < s.length(); i += 2 * k)
      {
         int l = i, h = i + k - 1 < s.length() ? i + k - 1 : s.length() - 1;
         while (l < h)
         {
            swap(s[l++], s[h--]);
         }
      }
      return s;
   }
};