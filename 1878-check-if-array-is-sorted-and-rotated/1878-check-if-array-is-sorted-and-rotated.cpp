class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        for(int i=1;i<(2*n);i++){
          if(nums[(i-1)%n] <= nums[i%n]){
            count+=1;
          }else{
            count=1;
          }
          if(count == n){
            return true;
          }
        }
        return n == 1;
    }
};