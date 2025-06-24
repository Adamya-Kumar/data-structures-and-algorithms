class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxCon=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
              count+=1;
              maxCon=max(maxCon,count);
            }else{
              count=0;
            }
        }
        return maxCon;
    }
};