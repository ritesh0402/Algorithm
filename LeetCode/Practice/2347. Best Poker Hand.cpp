class Solution
{
public:
   string bestHand(vector<int> &ranks, vector<char> &suits)
   {
      bool flush = true;
      for (int j = 0; j < 5; j++)
      {
         if (suits[0] != suits[j])
            flush = false;
      }
      if (flush)
         return "Flush";

      int rfreq = 0;
      unordered_map<int, int> rm;
      for (int i = 0; i < 5; i++)
      {
         rm[ranks[i]]++;
         rfreq = max(rfreq, rm.find(ranks[i])->second);
      }
      if (rfreq >= 3)
         return "Three of a Kind";
      else if (rfreq == 2)
         return "Pair";
      else
         return "High Card";
   }
};