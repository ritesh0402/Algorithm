class Solution
{
public:
   int compress(vector<char> &chars)
   {
      vector<char> str;
      int cnt = 1, ans = 0;
      for (int i = 0; i < chars.size(); i++)
      {
         if (i == chars.size() - 1 || chars[i] != chars[i + 1])
         {
            if (cnt == 1)
            {
               str.push_back(chars[i]);
            }
            else
            {
               str.push_back(chars[i]);
               string temp = to_string(cnt);
               for (int j = 0; j < temp.size(); j++)
               {
                  str.push_back(temp[j]);
                  ans++;
               }
            }
            ans += 1;
            cnt = 1;
         }
         else
            cnt++;
      }

      chars = str;
      return ans;
   }
};