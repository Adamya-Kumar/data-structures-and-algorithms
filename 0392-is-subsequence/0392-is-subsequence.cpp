class Solution {
public:
// int static t[101][1001];
// string printLCS(string a,string b,int n,int m){
//     int i=n;
//     int j=m;
//     string s="";
//     while(i>0 && j>0){
//         if(a[i-1] == b[j-1]){
//             s.push_back(a[i-1]);
//             i--;
//             j--;
//         }else{
//             if(t[i-1][j]>t[i][j-1]){
//                 i--;
//             }else if(t[i-1][j]<t[i][j-1]){
//                 j--;
//             }
//         }
//     }
//     return s;
// }


int lcs(string a,string b,int n,int m){
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i == 0 || j == 0)
            t[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(a[i-1] == b[j-1]){
                t[i][j] =t[i-1][j-1]+1;
            }else{
                t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    return t[n][m];
}
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int size =lcs(s,t,n,m);
        if(n==size){
            return true;
        }else{
            return false;
        }
        // string lcs=printLCS(s,t,n,m);
    }
};