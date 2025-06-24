class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int l=0,r=n-1;
        while(l<r){
          int temp = nums[l];
          nums[l] = nums[r];
          nums[r] = temp;
          l++;
          r--;
        }
         l=0,r=k-1;
        while(l<r){
          int temp = nums[l];
          nums[l] = nums[r];
          nums[r] = temp;
          l++;
          r--;
        }
         l=k,r=n-1;
        while(l<r){
          int temp = nums[l];
          nums[l] = nums[r];
          nums[r] = temp;
          l++;
          r--;
        }
    }
};