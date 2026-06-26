#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> multiplicationTable(int n){
        vector<int> result(10);
        for (int i = 1; i <= 10; i++) {
            result[i - 1] = n * i;
        }
        return result;
    }
};
