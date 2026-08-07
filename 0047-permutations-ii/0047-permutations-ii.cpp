class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> p;
        sort(nums.begin(),nums.end());
        p.push_back(nums);
        while( next_permutation(nums.begin(),nums.end())){
           
            p.push_back(nums);
        }
        return p;
    }
};