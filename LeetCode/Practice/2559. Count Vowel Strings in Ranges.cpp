class Solution
{
public:
   vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
   {
      int n = words.size();
      vector<long> isVovel(n, 0);
      int goodStr = 0;
      for (int i = 0; i < n; i++)
      {
         if ((words[i][0] == 'a' or words[i][0] == 'e' or words[i][0] == 'i' or words[i][0] == 'o' or words[i][0] == 'u') and (words[i].back() == 'a' or words[i].back() == 'e' or words[i].back() == 'i' or words[i].back() == 'o' or words[i].back() == 'u'))
         {
            goodStr++;
         }
         isVovel[i] = goodStr;
      }

      vector<int> ans;
      for (auto q : queries)
      {
         if (q[0] == 0)
         {
            ans.push_back(isVovel[q[1]]);
         }
         else
         {
            ans.push_back(isVovel[q[1]] - isVovel[q[0] - 1]);
         }
      }
      return ans;
   }
};
