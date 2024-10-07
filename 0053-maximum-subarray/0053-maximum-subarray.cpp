class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub=nums[0];
        int currSum=0;
        for(auto i:nums){
            if(currSum < 0){
                currSum=0;
            }
            currSum+=i;
            maxSub = max(maxSub,currSum);

        }
    return maxSub;
    }
};