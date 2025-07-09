// User function template for C++

class Solution {
  public:
  void cS(vector<int>& arr,int target,int i,vector<int>& db,vector<vector<int>>& ans){
      if(arr.size() == i){
          if(target == 0){
              ans.push_back(db);
          }
          return ;
      }
      if(arr[i]<=target){
          db.push_back(arr[i]);
          cS(arr,target-arr[i],i,db,ans);
          db.pop_back();
      }
          cS(arr,target,i+1,db,ans);
      
  }
    // Function to find all combinations of elements
    // in array arr that sum to target.
    vector<vector<int>> combinationSum(vector<int> &arr, int target) {
        vector<vector<int>> ans;
        vector<int>db;
        cS(arr,target,0,db,ans);
        return ans;
    }
};