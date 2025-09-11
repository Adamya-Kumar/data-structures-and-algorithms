#include <iostream>
using namespace std;

void CountingNum(int n){
    if(n==0){
        return;
    }
     CountingNum(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    // int ans = factor(n);
CountingNum(n);
    
return 0;
}