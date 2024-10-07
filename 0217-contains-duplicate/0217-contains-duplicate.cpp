class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<mpp.size();i++){
            if(mpp[nums[i]] > 1){
                return true;
            }
        }
        return false;
    }
};