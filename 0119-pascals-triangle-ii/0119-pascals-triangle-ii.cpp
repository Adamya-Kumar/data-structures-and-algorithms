class Solution {
public:
    vector<int> getRow(int numRows) {
         vector<int> ans;
        vector<int>prev;
        for(int i=0;i<=numRows;i++){
            vector<int> curr(i+1,1);
            for(int j=1;j<i;j++){
                curr[j] = prev[j-1] + prev[j]; 
            }
            if(i == numRows){
                ans=curr;
            }
            prev = curr;
        }
        return ans;
    }
};