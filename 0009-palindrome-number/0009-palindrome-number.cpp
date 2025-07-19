class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long int sum=0;
        int org=x;
        while(x > 0){
          int rev= x%10;
          sum=(sum*10)+rev;
          x=x/10;
        }
        if(org == sum) return true;
        return false;
    }
};