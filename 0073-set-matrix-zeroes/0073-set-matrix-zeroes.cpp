class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>r;
        vector<int>c;
        int row=matrix.size();
        int col= matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        int m=r.size();
        int n=c.size();
        for(int i=0;i<m;i++){
            int p=r[i];
            for(int j=0;j<col;j++){
                matrix[p][j]=0;
            }
           
        }
        for(int i=0;i<n;i++){
            int p=c[i];
            for(int j=0;j<row;j++){
                matrix[j][p]=0;
            }
           
        }
    
        


    }
};