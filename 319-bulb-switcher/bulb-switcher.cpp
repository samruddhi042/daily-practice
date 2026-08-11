class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};  //a bulb remains ON only if it is toggled an odd number of times. This happens only for bulb positions that are perfect squares. thus the problem reduces to counting the number of perfect squares less than or equal to n.