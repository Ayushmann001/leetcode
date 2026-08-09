class Solution {
public:
int count(int numBottles, int numExchange,int county){
    // if(numBottles<numExchange)
    // return county;

    int x=numBottles/numExchange;
    int y=numBottles-(x*numExchange);
    county=county+x;
    if(x+y>=numExchange){
        
       return count((x+y),numExchange,county);
    }
    else
    return county;
    
}
    int numWaterBottles(int numBottles, int numExchange) {
        int county=numBottles;
        return count(numBottles,numExchange,county);

    }
};