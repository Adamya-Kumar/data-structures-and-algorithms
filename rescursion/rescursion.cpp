#include <iostream>
using namespace std;
int factor(int n){
    if(n==0)
    return 1;
    return n*factor(n-1);
}
    int a =1;
int powerOfTwo(int n){
    if(n==0){
        return 1;
    }

    return 2* powerOfTwo(n-1);
    
}
int main(){
    int n;
    cin>>n;
    // int ans = factor(n);
    int ans = powerOfTwo(n);
    cout<<ans;
return 0;
}