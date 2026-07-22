class Solution {
    void combination(vector<int>& candidates,int index,int target,vector<int>&a , vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(a);
            return;
        }
        if(index>=candidates.size())
        return;
        
       if(candidates[index]<=target){
        a.push_back(candidates[index]);
        combination(candidates,index,target-candidates[index],a,ans);
        a.pop_back();
       }
       combination(candidates,index+1,target,a,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> a;
        int index=0;

        combination(candidates,index,target,a,ans);

        return ans;
       

    }
};