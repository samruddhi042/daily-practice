class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int zero=0; //3 variables of division to couunt the stones
        int one=0;
        int two=0;
        for(int i=0;i<stones.size();i++){

            if(stones[i]% 3==0)
                zero++;                  //if condition is true then increment
            else if(stones[i]%3==1)
                one++;
            else
                two++;
        }

        if(zero %2==0){
            if(one>0&& two>0)
                return true;
            else
                return false;
        }

        if(abs(one -two)>2)
            return true;
        return false;
    }
};