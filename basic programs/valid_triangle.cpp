#include<iostream>
using namespace std;
class Solution {
public:
    bool isValidTriangle(double a, double b, double c) {
        return a+b>c && b+c>a && a+c>b;
    }
};
int main(){
    Solution s;
    double a,b,c;
    cout<<"Enter sides of triangle: ";
    cin>>a>>b>>c;
    if(s.isValidTriangle(a,b,c)){
        cout<<"triangle is valid";
    } else {
        cout<<"invalid triangle";
    }
}