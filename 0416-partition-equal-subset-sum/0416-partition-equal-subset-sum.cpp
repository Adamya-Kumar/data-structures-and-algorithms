class Solution {
public:
    bool equalSumPartition(vector<int> arr,long long sum,int n){
        long long t[n+1][sum+1];
        for(int i=0;i<n+1;i++){
          for(int j=0;j<sum+1;j++){
            if(i==0)
            t[i][j]=false;
            if(j==0)
            t[i][j]=true;
          }
        }
          for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j){
                    t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
                }else{
                  t[i][j]=t[i-1][j];
                }
            }
          }
        
      return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        long long sum=0;
        //sum  of array 
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2 != 0){
          return false;
        }else{
          return equalSumPartition(nums,sum/2,nums.size());
        }
    }
};