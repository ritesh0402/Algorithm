class Solution
{
public:
   string customSortString(string order, string s)
   {
      int n = s.length(), m = order.length();
      int arr[26];
      string ans = "";
      for (int i = 0; i < n; i++)
      {
         arr[s[i] - 'a']++;
      }
      for (int j = 0; j < m; j++)
      {
         while (arr[order[j] - 'a'] > 0)
         {
            ans += order[j];
            arr[order[j] - 'a']--;
         }
      }
      for (int k = 0; k < 26; k++)
      {
         while (arr[k] > 0)
         {
            ans += k + 'a';
            arr[k]--;
         }
      }

      return ans;
   }
};