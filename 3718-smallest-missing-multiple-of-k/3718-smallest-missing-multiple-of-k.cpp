class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>v;
        int n=100/k;
        if(nums.size()==1 && nums[0]==k)
        return k*2;
        
        int m=0;
        for(int i=1;i<=nums.size();i++){
           int key=k*i;

            
            if(find(nums.begin(), nums.end(), key)==nums.end())
            return key;
           
           
            
        }
        
        return k*(nums.size()+1);
    }
};