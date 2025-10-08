class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {     
        vector<int> ans;
        sort(potions.begin(),potions.end());
        int n=potions.size();
        for(int i=0;i<spells.size();i++){
            int left=0;
            int right=n-1;
            int mid;
            while(left<=right){
                mid = left + (right - left) / 2;
                if(static_cast<long long>(spells[i])*potions[mid]>=success){
                    right = mid-1;
                }else{
                    left = mid + 1;
                }
            }
            ans.push_back(n-left);
        }
        return ans;
    }
};