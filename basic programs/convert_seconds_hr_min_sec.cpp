#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> secondsToHMS(int totalSeconds){
        int hours = totalSeconds / 3600;
        int remaining = totalSeconds % 3600;

        // Split the leftover into minutes and seconds
        int minutes = remaining / 60;
        int seconds = remaining % 60;

        return {hours, minutes, seconds};
        
    }
};
int main() {
    Solution solution;
    int totalSeconds;
    cout <<"Enter total seconds: ";
    cin >> totalSeconds;

    vector<int> hms = solution.secondsToHMS(totalSeconds);
    cout << "Hours: " << hms[0] << ", Minutes: " << hms[1] << ", Seconds: " << hms[2] << endl;

    return 0;
}