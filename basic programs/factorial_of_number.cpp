#include<iostream>
using namespace std;
class Solution {
public:
    long long factorial(int n){
        long long result=1;
        for (int i=2;i<=n;i++){
            result*=i;
        }
        return result;
    }
};
int main(){
    Solution s;
    cout<<"Enter a number to find its factorial: ";
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<s.factorial(n);
    return 0;
}