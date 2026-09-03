class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        string st;
        vector<string>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
       
        sort(v.begin(), v.end(), [](string a, string b) {
    if(a.size() != b.size())
        return a.size() < b.size();

    return a < b;
});

        string p=v[nums.size()-k];
       
    //   
    return p;
    }
};