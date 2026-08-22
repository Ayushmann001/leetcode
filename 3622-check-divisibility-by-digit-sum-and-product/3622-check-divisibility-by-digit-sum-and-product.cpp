class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int product=1;
        while(temp!=0){
            int p=temp%10;
            sum=sum+p;
            product=product*p;
            temp=temp/10;
        }
        int t=sum+product;
        if(n%t==0)
        return true;
        else
        return false;
    }
};