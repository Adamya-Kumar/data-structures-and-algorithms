// User function Template for C++
class Solution {
  public:
  unordered_map<string,int> mp;
  int solve(string& s,int i,int j,bool isTrue){
     //base condition
      if(i>j){
          return 0;
      }
      //when we have one element
      if(i==j){
          if(isTrue == true){
              return s[i] == 'T';
          }else{
              return s[i] == 'F';
          }
      }
      //memorization 
      string key=to_string(i);
      key.push_back(' ');
      key.append(to_string(j));
      key.push_back(' ');
      key.append(to_string(isTrue));
      
      if(mp.find(key)!=mp.end()){
          return mp[key];
      }
      
      //start: with oprand; 
      //stop: at second last element because this orpand and end element will be T/F ;
      //jump: k=k+2 ,if i  stand at k next element will be T/F ,
      //so of oprand we have jump next to next element;
      int ans=0;
      for(int k=i+1;k<=j-1;k=k+2){
          //    (left: i to k-1)    k     (right: k+1 to j)
          // (leftTrue,leftFalse)      (rightTrue,rightFalse)
          int LT = solve(s,i,k-1,true);
          int LF = solve(s,i,k-1,false);
          int RT = solve(s,k+1,j,true);
          int RF = solve(s,k+1,j,false);
          // k can be anything & , ^ , |
          if(s[k] == '&'){
              if(isTrue == true){
                  ans+= LT * RT;
              }else{
                  ans += (LT * RF) +
                        (LF * RT) + 
                        (LF * RF);
              }
          }else if(s[k] == '|'){
              if(isTrue == true){
                  ans += (LT * RT) +
                        (LT * RF) + 
                        (LF * RT);
              }else{
                  ans += LF * RF;
              }
          }else if(s[k] == '^'){
              if(isTrue == true){
                  ans += (LT * RF) + 
                        (LF * RT);
              }else{
                  ans += (LT * RT) + 
                        (LF * RF);
              }
          }
      }//for end
      return mp[key] = ans;
      
  }
    int countWays(string &s) {
        mp.clear();
        int n=s.size();
        return solve(s,0,n-1,true);
    }
};