// User function template for C++
    #define MOD 1000000007
class Solution {
  public:
    #define ll long long
    ll countStrings(int n) {
        ll zeroEnd=1;
        ll oneEnd=1;
        ll sum=zeroEnd+oneEnd;//2
        if(n==1)return sum;
        int i=2;
        while(i<= n){
            oneEnd = zeroEnd;
            zeroEnd = sum;
            sum=(zeroEnd+oneEnd);
            i++;
        }
       return sum; 
    }
};