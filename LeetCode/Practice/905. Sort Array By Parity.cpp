class Solution
{
public:
   // vector<int> sortArrayByParity(vector<int>& nums) {
   //     int cnt=0;
   //     for( int i=nums.size()-1; i>=cnt; i-- ){
   //         if( nums[i]%2==0){
   //             nums.insert(nums.begin(),nums[i]);
   //             cnt++;
   //             nums.erase(nums.begin()+i+1);
   //             i++;
   //         }
   //     }
   //     return nums;
   // }

   // vector<int> sortArrayByParity(vector<int>& nums) {
   //     sort(nums.begin(), nums.end(), [](int a, int b) {
   //         cout << a << " " << b << endl;
   //         if((a%2!=0) && (b%2==0)){
   //             return false;
   //         }
   //         return true;
   //     });
   //     return nums;
   // }

   vector<int> sortArrayByParity(vector<int> &nums)
   {
      int j = 0;
      for (int i = 0; i < nums.size(); i++)
      {
         if (nums[i] % 2 == 0)
         {
            swap(nums[i], nums[j]);
            j++;
         }
      }
      return nums;
   }
};