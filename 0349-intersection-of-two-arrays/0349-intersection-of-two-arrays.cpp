class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int a=nums1[i];
            if(find(nums2.begin(),nums2.end(),a)!=nums2.end()){

            if(find(ans.begin(),ans.end(),a)==ans.end())
            ans.push_back(a);
            }
        }
        return ans;
    }
};