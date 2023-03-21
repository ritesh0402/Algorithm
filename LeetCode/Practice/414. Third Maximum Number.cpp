class Solution
{
public:
   int thirdMax(vector<int> &nums)
   {
      set<int> s;
      for (int &x : nums)
         s.insert(x);
      int size = s.size();
      if (size < 3)
         return *s.rbegin();
      for (auto it : s)
      {
         if (size == 3)
            return it;
         size--;
      }
      return 69;
   }
};