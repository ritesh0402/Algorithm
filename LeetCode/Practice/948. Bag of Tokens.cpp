class Solution
{
public:
   int bagOfTokensScore(vector<int> &tokens, int power)
   {
      sort(tokens.begin(), tokens.end());
      int l = 0, r = tokens.size() - 1, maxScore = 0, score = 0;
      while (l <= r)
      {
         if (power >= tokens[l])
         {
            power -= tokens[l];
            score++;
            l++;
            maxScore = max(maxScore, score);
         }
         else if (score > 0)
         {
            power += tokens[r];
            score--;
            r--;
         }
         else
         {
            break;
         }
      }
      return maxScore;
   }
};