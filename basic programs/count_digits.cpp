#include<iostream>
using namespace std;
class Solution{
public:
    int countDigits(int n){
        // Zero is written as a single symbol, so it has 1 digit
        if (n==0){
            return 1;
        }
        int count=0;
        // Each division by 10 removes one digit, even for negatives
        while (n !=0){
            n /=10;
            count++;
        }
        return count;
    }
};
int main(){
    Solution s;
    cout<<"Enter an integer: ";
    int n;
    cin>>n;
    cout<<"Number of digits: "<<s.countDigits(n);
    return 0;
}