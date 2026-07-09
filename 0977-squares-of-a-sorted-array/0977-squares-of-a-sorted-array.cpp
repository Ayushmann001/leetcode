class Solution {
public:
 

    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
       
        // return nums;

        vector<int>ans(nums.size());
        int s=0;
        int e=nums.size()-1;
        int idx=nums.size()-1;

        while(s<=e){
            int lsq=nums[s]*nums[s];
            int rsq=nums[e]*nums[e];

            if(lsq>rsq){
                ans[idx]=lsq;
                s++;
            }
            else{
                ans[idx]=rsq;
                e--;
            }
            idx--;
        }
        return ans;

    }
};