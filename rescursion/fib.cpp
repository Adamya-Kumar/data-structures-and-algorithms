#include <iostream>
using namespace std;
int fib(int n){
    if(n<=1){
    cout<<n<<endl;
    return n;
    }
  
 
int ans= fib(n-1)+fib(n-2);

return ans; 
}
int main(){
   cout<<"sum:" <<fib(7)<<" ";
return 0;
}