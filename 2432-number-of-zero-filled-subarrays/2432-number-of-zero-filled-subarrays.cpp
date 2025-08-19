class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
     long long cnt=0;
     long  long res=0;
    for(auto x:nums){
        if(x==0){
          cnt++;
          res+=cnt;
        }else{
          cnt=0;
        }
    }
    return res;
    }
};