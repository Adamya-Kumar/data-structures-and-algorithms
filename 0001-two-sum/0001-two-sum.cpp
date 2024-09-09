#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int val = target - a;
            if (mpp.find(val) != mpp.end()) {
                return {mpp[val], i};
            }
            mpp[a] = i;
        }
        return {-1, -1};
    }
};
int main(){
    Solution obj;
    vector<int> nums;
    int target=3;
    vector<int> ans=obj.twoSum(nums,target);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}