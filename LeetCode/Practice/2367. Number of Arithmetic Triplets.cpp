class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        // int count=0;
        // int f=0, s=0, t=0;
        // for( f=0; f<nums.size()-2; f++){
        //     s=f+1;
        //     while( s<nums.size()-1 && (nums[s]-nums[f] < diff ) ){
        //         s++;
        //     }
        //     t=s+1;
        //     while( t<nums.size() && (nums[t]-nums[s] < diff ) ){
        //         t++;
        //     }
        //     if( t<nums.size() && (nums[s]-nums[f] == diff ) && (nums[t]-nums[s] == diff ) ) {
        //         count++;
        //         cout << nums[f] << " " << nums[s] << " " << nums[t] << endl;
        //     }
            
        // }
        // return count;

        // int j=0, k=0;
        // int ans=0;

        // for(int i=nums.size()-1; i>1 ; i--){
        //     k = i;
        //     j = k-1 ;
        //     int cnt=0;
        //     while(j>=0){
        //         // cout << k << " " << nums[k] << endl;
        //         if(nums[k]-nums[j] == diff){
        //             cnt++;
        //             if(cnt == 2){
        //                 break;
        //             }
        //                 k=j;
        //         }
                
        //         j--;
        //     }
        //     if(cnt == 2){
        //         ans++;
        //     }
        // }
        // return ans;



       int ans=0;
       for(int i=nums.size()-1;i>=2;i--)
       {
           int cnt=0;
           int j=i;
           int k=i-1;
           while(k>=0)
           {
               if(nums[j]-nums[k]==diff)
               {
                   cnt++;
                   if(cnt==2){
                        break;
                   }
               j=k;
               }
               
               k--;
           }
           if(cnt==2)
           ans++;
       } 
       return ans;
    


    }
};