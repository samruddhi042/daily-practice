#include<iostream>
#include<string>
using namespace std;
class Solution{
public:
    string evenOrOdd(int n){ // Compare the remainder against 0 so negatives are handled correctly
        if(n%2 !=0){
            return "Odd";
        }
        return "Even";
    }
};
int main(){
    Solution s;
    cout<<"Enter an integer:";
    int n;
    cin>>n;
    cout<<s.evenOrOdd(n);
}