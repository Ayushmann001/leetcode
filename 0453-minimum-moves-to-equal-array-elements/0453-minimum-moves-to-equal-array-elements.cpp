// class Solution {
// public:
//     void solve(vector<int> nums,vector<long long> &ans,int maxi){
//         for(int i=0;i<nums.size();i++){
//             ans.push_back(maxi-nums[i]);
//         }
//     }
//     int minMoves(vector<int>& nums) {
//         vector<long long> ans;
//         long long sum=0;
//         long long maxi=*max_element(nums.begin(),nums.end());
//         solve(nums,ans,maxi);
//         for(int i=0;i<ans.size();i++){
//             sum=sum+ans[i];
//         }
//         return sum;
//     }
// };
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int lo = ranges::min(nums), moves = 0;
        for (int x : nums) moves += x - lo;
        return moves;
    }
};