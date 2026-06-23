#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n : "; //time complexity O(1), space complexity O(1), much faster
    cin>>n;
    int sum=0;

    sum = n* (n+1)/2;
    cout<<"The sum is: "<<sum<<endl;
}