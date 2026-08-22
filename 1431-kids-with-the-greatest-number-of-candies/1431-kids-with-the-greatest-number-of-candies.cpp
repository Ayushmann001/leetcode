class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> d(n);
        int greatest=0;
        for(int i=0;i<candies.size();i++){
            int candy=candies[i];
            greatest=max(candy,greatest);
        }
        for(int i=0;i<candies.size();i++){
            int c=candies[i];
            if(c+extraCandies>=greatest)
            d[i]=true;

            else
            d[i]=false;
        }
        return d;
    }
};