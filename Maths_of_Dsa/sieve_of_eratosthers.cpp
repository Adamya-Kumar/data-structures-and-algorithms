// if we use this code of big values like 10000 or > .it will use too much memory n^2 =>1000000^2 => show limit excessed error
//  #include <iostream>
//  using namespace std;
//  bool isPrime(int x){
//      if(x<=1)
//      return false;
//      for(int i=2;i<x;i++){
//          if(x%i==0)
//          return false;
//      }
//      return true;
//  }
//  int CountPrime(int n){
//      int count = 0;
//      for(int i=2;i<n;i++){
//          if(isPrime(i))
//          count++;
//      }
//      return count;
//  }
//  int main(){
//      int n;
//      cin>>n;
//  int result=CountPrime(n);
//  cout<<"Less than "<<n<<" contain "<<result<<" prime numbers."<<endl;
//  return 0;
//  }

// we use advance version.to find the prime number or count as well...
#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n, cnt = 0;
    cin >> n;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            cnt++;
        }
        for (int j = 2 * i; j < n; j = j + i)
        {
            prime[j] = false;
        }
    }
    cout << cnt << endl;
    return 0;
}