class Solution {
public:
    int missingNumber(vector<int>& nums){
        int range=nums.size();
        int actualSum=(range*(range+1))/2;  //(n*(n+1))/2
        //actual sum when the missing number is present in array
        int currSum=0;

        for(int i=0; i<nums.size();i++){
            currSum=currSum+nums[i];
        }
        int ans=actualSum-currSum;
        return ans;
    }
};