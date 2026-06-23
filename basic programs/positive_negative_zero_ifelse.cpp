#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter value of A "<<endl;
    cin>>a;

    if(a>0){
        cout<<" A is positive"<<endl;
    }
    //method 1
    // else {
    //     if (a<0){
    //         cout<<" A is negatice"<<endl;
    //     }
    //     else {
    //         cout<<" A is zero"<<endl;
    //     }
    // }

    //method 2 using elseif 
    else if (a<0){
        cout<<" A is negatice"<<endl;
    } else {
        cout<<" A is zero"<<endl;
    }
}