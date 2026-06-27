#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Solution {
public:
    double convert(double temp,string scale){
        double result;
        if(scale=="C"){
            result=temp*9/5+32;
        }else{
            result=(temp-32)*5/9;
        }
        // Round to 2 decimal places
        return round(result*100)/100;
    }
};
int main() {
    Solution solution;
    double temp;
    string scale;
    cout <<"Enter temperature: ";
    cin >> temp;
    cout <<"Enter scale(C for celsius, F for fahrenheit): ";
    cin >> scale;

    double convertedTemp=solution.convert(temp,scale);
    if(scale=="C"){
        cout<<"Temperature in Fahrenheit: "<<convertedTemp<<endl;
    }else{
        cout<<"Temperature in Celsius: "<<convertedTemp<<endl;
    }
    return 0;
}