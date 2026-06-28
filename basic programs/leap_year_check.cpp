#include<iostream>
using namespace std;
bool (isleapyear(int year)){
    if ((year%4==0&&year%100!=0) || year%400==0){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    int year;
    cout<<"Enter a year to check if its a leap year or not: ";
    cin>>year;
    if(isleapyear(year)){
        cout<<"The year "<<year<<" is leap year";
    }
    else{
        cout<<"The year "<<year<<" is not a leap year";
    }
}