class Solution {
public:
    int reverseDegree(string s) {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++){
            int p='z'-s[i]+1;
            sum=sum+(i+1)*p;
        }
        return sum;
    }
};