class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> mpp;
        for(auto itr:nums){
          int i=abs(itr)-1;
          nums[i]= -1 * abs(nums[i]);
        }
      for(int i=0;i<nums.size();i++){
          if(nums[i]>0){
            mpp.push_back(i+1);
          }
      }
      return mpp;
    }
};