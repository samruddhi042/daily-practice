class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }else if(n==1){   //base cases
            return 1;
        }
        
        int ft=0;
        int st=1; 
        
        for(int i=1;i<=n;i++){  //instead of creatinng 3 variables and sttarting the loop from i=2, we got the ans using 2 variables
            int tt=ft+st;
            ft=st;
            st=tt;
        }
        return ft; //as for loop continues from 1->n, we get fibonacci series in ft table, the last ft table value is the ans
    }
};