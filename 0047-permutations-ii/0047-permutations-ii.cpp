class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> p;
        vector<int>s;
        sort(nums.begin(),nums.end());
        s=nums;
        p.push_back(nums);
        while( next_permutation(nums.begin(),nums.end())){
           
            p.push_back(nums);
        }
        return p;
    }
};