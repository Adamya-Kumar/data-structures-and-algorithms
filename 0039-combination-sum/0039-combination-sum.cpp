class Solution {
public:

  void helper(vector<int>& arr,int target,int i,vector<int>& db,vector<vector<int>>& ans){
      if(arr.size() == i){
        if(target == 0){
          ans.push_back(db);
        }
        return ;
      }
      if(target>=arr[i]){
        db.push_back(arr[i]);
        helper(arr,target-arr[i],i,db,ans);
        db.pop_back();
      }
      helper(arr,target,i+1,db,ans);
  }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> db;
        helper(candidates,target,0,db,ans);
        return ans;
    }
};