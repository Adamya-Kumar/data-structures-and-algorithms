class Solution {
public:
#define MOD 1000000007
    long long isPowerRcv(long long x, long long y) {
        if (y == 0)
            return 1;
        long long ans = isPowerRcv(x, y / 2);
        ans *= ans;
        ans %= MOD;
        if (y % 2)
            ans *= x;
        ans %= MOD;
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd = n / 2;
        long long even = n / 2 + n % 2;
        return (isPowerRcv(5, even) * isPowerRcv(4, odd) % MOD);
    }
};