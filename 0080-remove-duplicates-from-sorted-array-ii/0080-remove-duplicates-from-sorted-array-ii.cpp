class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n=nums.size();
        if(n<=2)
        return n;
        int k=0;
        int l=2;
        int i=0;

       while(i<n){
        if(i==n-1 || nums[i]!=nums[i+1]){
            nums[k]=nums[i];
            k++;
            i++;
        }
        else if(nums[i]==nums[i+1]){
            int value=nums[i];
            int count=1;
            while(i<n && nums[i]==value ){
               
               if(count<=2){
                 nums[k]=nums[i];
                    k++;
                    i++;
                    count++;
               }
               else
               i++;
                   
                
                
            }
        }
       }
       return k;
        
    }
};