class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        for(int i=0;i<image.size();i++){
            vector<int> v;
            (reverse(image[i].begin(),image[i].end()));
            for(int j=0;j<image[i].size();j++){
               
                if(image[i][j]==0){
                    v.push_back(1);
                }
                else if(image[i][j]==1){
                    v.push_back(0);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};