#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter value of n : ";
    cin>>n;
    int i=0; //start with 0 for even number sum OR with 1 for odd number sum
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2; //increment by 2, so it can directly jump of next to next number like 0,2,4,6...
    }
    cout<<"sum of even number is: "<<sum<<endl;
}