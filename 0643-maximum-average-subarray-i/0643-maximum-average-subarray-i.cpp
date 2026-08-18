class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
       int count=0;
       double sum1=sum;
        for(int i=k;i<nums.size();i++){
          sum1=sum1-nums[i-k]+nums[i];
          sum=max(sum,sum1);
        }
        return sum/k;
    }
};