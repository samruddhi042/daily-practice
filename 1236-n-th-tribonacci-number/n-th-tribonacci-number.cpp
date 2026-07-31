class Solution {
public:
    int tribonacci(int n) { //series where first 3 numbers/terms are given ft=0,st=1,tt=1, find n'th term
        if(n==0){ //edge cases
            return 0;
        }else if(n==1 || n==2){
            return 1;
        }

        int ft=0;   //given/known values
        int st=1;
        int tt=1;

        for(int i=3;i<=n;i++){
            int frt= ft + st +tt;
            ft=st;
            st=tt;
            tt=frt;
        }
        return tt;
    }
};