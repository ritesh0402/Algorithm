class Solution
{
public:
   int minimumLength(string s)
   {
      int charFreq[27] = {0};
      for (char &x : s)
      {
         charFreq[x - 'a']++;
      }
      int len = 0;
      for (int &x : charFreq)
      {
         // int cnt=x;
         // while(cnt>=3){
         //     cnt = (cnt/3) + (cnt%3);
         // }
         // len += cnt;
         if (x == 0)
            continue;
         else if (x % 2 == 0)
            len += 2;
         else
            len++;
      }
      return len;
   }
};