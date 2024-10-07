class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i]) != mpp.end()){
                return true;
            }
            mpp.insert(nums[i]);
        }
        return false;
    }
};