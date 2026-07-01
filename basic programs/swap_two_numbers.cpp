#include<iostream>
#include<vector>
using namespace std;
class solution{
public:
    vector<int> swapnumbers(int a,int b){
        int temp=a;
        a=b;
        b=temp;
        return{a,b};
    }
};
int main(){
    solution s;
    int a,b;
    cout<<"enter 2 numbers: ";
    cin>>a>>b;
    vector<int> result=s.swapnumbers(a,b);
    cout<<"after swapping: "<<result[0]<<" "<<result[1];
    return 0;
}