class Solution {
public:
int t[1001][1001];
    int solve(int e,int f){
        if(f==0 || f==1){
            return f;
        }
        if(e==1){
            return f;
        }
        if(t[e][f]!=-1){
            return t[e][f];
        }

        int mini = INT_MAX;
        for(int k=1;k<=f;k++){
            int temp = 1 + max( solve(e-1,k-1), solve(e,f-k));
        mini = min(mini,temp);
        }
        return t[e][f] = mini;
    }
    int twoEggDrop(int n) {
        memset(t,-1,sizeof(t));
        return solve(2,n);
    }
};