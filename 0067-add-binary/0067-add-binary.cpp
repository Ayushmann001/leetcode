class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans="";

        int m=a.length();
        int n=b.length();
        int carry=0;

        for(int i=0;i<max(m,n);i++){
            int x=0;
            int y=0;
            if(i<m)
             x=a[i]-'0';
             else
             x=0;
             if(i<n)
             y=b[i]-'0';
             else
             y=0;
            int sum=carry+x+y;
            carry=sum/2;
            ans.push_back(sum%2+'0');
        }
        if(carry!=0)
        ans.push_back(carry+'0');

         reverse(ans.begin(),ans.end());

         return ans;
    }
  
}; 