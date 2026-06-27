#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> divide(int dividend, int divisor){
        int quotient = dividend / divisor;
        // Modulo gives the leftover
        int remainder = dividend % divisor;
        return {quotient, remainder};
    }
};
int main() {
    Solution solution;
    int dividend, divisor;
    cout <<"Enter dividend: ";
    cin >> dividend;
    cout <<"Enter divisor: ";
    cin >> divisor;

    vector<int> result = solution.divide(dividend, divisor);
    cout << "Quotient: " << result[0] << ", Remainder: " << result[1] << endl;
    return 0;
}