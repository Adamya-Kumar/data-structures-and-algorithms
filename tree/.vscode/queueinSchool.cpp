#include <bits/stdc++.h>
using namespace std;
void helper(int n,int arr[]){
    for(int i=0;i<n;i++){
        if(i%2 != arr[i]%2){
            cout<<0;
            break;
        }
        
    }
}
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    helper(n,arr);
}
    
return 0;
}