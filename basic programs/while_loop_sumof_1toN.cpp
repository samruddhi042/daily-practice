#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n: "; //time complexity O(n), space complexity O(1), slower for large n
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"The sum is: "<<sum<<endl;
}