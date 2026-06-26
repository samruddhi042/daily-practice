#include<iostream>
using namespace std;
class Solution {
public:
    bool areCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
        long long cross = (long long)(y2 - y1) * (x3 - x1) - (long long)(y3 - y1) * (x2 - x1); 
        //When the points are collinear, the vectors lie along the same line, and the area is zero.
        return cross == 0;
        
    }
};
int main(){
    Solution s;
    cout<<"enter the coordinates of 3 points(x1,y1,x2,y2,x3,y3): ";
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(s.areCollinear(x1,y1,x2,y2,x3,y3)){
        cout<<"the points are collinear";
    }else{
        cout<<"the points are not collinear";
    }
    return 0;
}