class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> s1(n,0);
        vector<int> s2(n,0);
       int a=1;
       int b=1;
       for(int i=0;i<nums.size();i++){
        if(i==0)
        s1[i]=1;
        else{
            s1[i]=a*nums[i-1];
            a=s1[i];
        }
       }
        for(int j=nums.size()-1;j>=0;j--){
            if(j==nums.size()-1)
            s2[j]=1;
            else{
                s2[j]=b*nums[j+1];
                b=s2[j];
            }
        
       }
       for(int k=0;k<nums.size();k++){
        nums[k]=s1[k]*s2[k];
       }
        return nums;
    }
};