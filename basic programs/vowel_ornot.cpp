#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string vowelOrConsonant(char ch){
        char c = tolower(ch);
        if(c == 'a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return "vowel";
        }
        else return "consonant";
        
    }
};
int main(){
    Solution s;
    cout<<"enter a character: ";
    char ch;
    cin>>ch;
    cout<<s.vowelOrConsonant(ch);
}