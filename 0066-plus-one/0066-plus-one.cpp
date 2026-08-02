class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        vector<int> m;
       
        int carry=0;
        int i=n;
        int sum=0;
        while(i>=0){
            if(i==n)
            sum=carry+digits[i]+1;
            else
            sum=carry+digits[i];

            m.push_back(sum%10);
            carry=sum/10;
            i--;
        }
        if(carry!=0)
        m.push_back(carry);
        reverse(m.begin(),m.end());
        return m;
    }
};