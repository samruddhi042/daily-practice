class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int ans=-1;
        for(int x:nums){
            int count = 0;

            for(int i=0;i<=nums.size()-k;i++){
                bool found=false;
                for(int j=i; j<i+k;j++){

                    if(nums[j]==x){
                        found =true;
                        break;
                    }
                }

                if(found)
                    count++;
            }

            if(count==1){
                ans=max(ans,x);
            }
        }

        
        return ans;
    }
};