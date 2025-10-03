class Solution {
  public:
    int minCoinsUsed(vector<int>& coins,int sum,int n){
        int t[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(j==0)
                t[i][j]=0;
                if(i==0)
                t[i][j]=INT_MAX-1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(i==1){
                    if(j%coins[0] == 0){
                        t[i][j] = j/coins[0];
                    }else{
                        t[i][j] = INT_MAX-1;
                    }
                }else{
                    if(coins[i-1]<=j){
                        t[i][j] = min(t[i][j-coins[i-1]]+1,t[i-1][j]);
                    }else{
                        t[i][j] = t[i-1][j];
                    }
                }
            }
        }
        return (t[n][sum] == INT_MAX-1 ? -1 : t[n][sum]);
    }
    int minCoins(vector<int> &coins, int sum) {
        return minCoinsUsed(coins,sum,coins.size());
    }
};