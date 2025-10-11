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
        int left=0;
        int right=0;
        for(int k=1;k<=f;k++){
            if(t[e-1][k-1]!=-1){
                left = t[e-1][k-1];
            }else{
              left = solve(e-1,k-1);
            }
            if(t[e][f-k]!=-1){
                right = t[e][f-k];
            }else{
                right = solve(e,f-k);
            }
            int temp = 1 + max( left, right);
        mini = min(mini,temp);
        }
        return t[e][f] = mini;
    }
    int twoEggDrop(int n) {
        memset(t,-1,sizeof(t));
        return solve(2,n);
    }
};