class Solution {
    int maxx(vector<int>nums,int j){
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<=j;i++){
        int p=nums[i];
        maxi=max(maxi,p);
        }
        return maxi;
    }
    int minn(vector<int>nums,int j){
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=j;i<n;i++){
        int p=nums[i];
        mini=min(mini,p);
        }
        return mini;
    }
    
public:

    int firstStableIndex(vector<int>& nums, int k) {
        int index=-1;
        int score=0;
        for(int i=0;i<nums.size();i++){
            int p=maxx(nums,i);
            int q=minn(nums,i);

            int diff=p-q;
            if(p-q <=k)
            return i;
        }
        
        return -1;
    }
};