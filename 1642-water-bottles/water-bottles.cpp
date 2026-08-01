class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans= numBottles;

        while(numBottles>=numExchange){
            int newBottles= numBottles/numExchange;
            int remBottles = numBottles% numExchange;
            ans=ans+newBottles;          //total number of bottle drink will keep increasing as we exchnge the bottles
            numBottles= newBottles + remBottles;
        }
        
        return ans;

    }
};