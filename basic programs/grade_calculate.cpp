#include<iostream>
#include<string>
using namespace std;
class Solution{
public:
    string gradeFromMarks(int marks){
        if(marks>=90) return "A";
        else if(marks>= 80) return "B";
        else if(marks>=70) return "C";
        else if(marks>=60) return "D";
        else return "F";
    }
};
int main(){
    Solution s;
    cout<<"Enter marks: ";
    int marks;
    cin>>marks;
    cout<< s.gradeFromMarks(marks);
    return 0;
}