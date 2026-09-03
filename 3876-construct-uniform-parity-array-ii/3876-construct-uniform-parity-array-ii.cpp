class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int> nums2;
        int p=INT_MAX;
         
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0){
                p=min(p,nums1[i]);
            }
            
        }
        if(p==INT_MAX)
        p=1;
        
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0){
                nums2.push_back(nums1[i]);
            }
            else{
                int q=nums1[i]-p;
                if(q<1)
                return false;
                
                nums2.push_back(nums1[i]-p);
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(nums2[i]%2==0)
            return false;
        }

        return true;
    }
};