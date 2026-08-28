class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> v(nums.size(),-1);
        int n=nums.size();
        for(int i=0;i<=2*n-1;i++){
            while(!st.empty() && nums[st.top()]<nums[i%n]){
                int index=st.top();
                v[index]=nums[i%n];
                st.pop();
            }
            st.push(i%n);
        }
       
        
        return v;
    }
};