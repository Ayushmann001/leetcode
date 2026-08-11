class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       
        vector<vector<int>> q(n, vector<int>(n));;
       
        int row=n;
        int col=n;

        int startrow=0;
        int endrow=row-1;
        int startcol=0;
        int endcol=col-1;

        int total=n*n;
        int count=1;

        while(count<=total){
            for(int i=startcol;i<=endcol;i++){
                q[startrow][i]=count;
                count++;
            }
            startrow++;
            for(int i=startrow;i<=endrow;i++){
                q[i][endcol]=count;
                count++;
            }
            endcol--;
            for(int i=endcol;i>=startcol;i--){
                q[endrow][i]=count;
                count++;
            }
            endrow--;
            for(int i=endrow;i>=startrow;i--){
                q[i][startcol]=count;
                count++;
            }
            startcol++;
        }
       
        


        return q;

    }
};