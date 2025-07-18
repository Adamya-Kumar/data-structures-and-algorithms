class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> isAnagrams;
      for (int j = 0; j < strs.size(); j++) {
            string temp = strs[j];
            sort(temp.begin(), temp.end()); 
            isAnagrams[temp].push_back(strs[j]); 
        }
      vector<vector<string>> ans;
      for(auto x:isAnagrams){
        ans.push_back(x.second);
      }
      return ans;
    }
};