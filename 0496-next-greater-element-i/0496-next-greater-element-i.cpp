class Solution {
    int findindex( vector<int>& nums2,int element){
        
        for(int i=0;i<nums2.size();i++){
            if(nums2[i]==element)
            return i;;
        }
        return -1;
    }
    int greater( vector<int>& nums2,int index){
       
        for(int i=index+1;i<nums2.size();i++){
            if(nums2[i]>nums2[index])
            return nums2[i];

        }
        return -1;
    }
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            int index=findindex(nums2,nums1[i]);
            v.push_back(greater(nums2,index));

        }
        return v;
    }
};