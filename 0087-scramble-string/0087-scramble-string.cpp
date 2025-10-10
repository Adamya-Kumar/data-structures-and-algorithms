class Solution {
public:
        unordered_map<string,bool> mp;
    bool solve(string a, string b) {
        if (a == b) {
            return true;
        }
        if (a.length() <= 1) {
            return false;
        }
        string tempA = a, tempB = b;
        sort(tempA.begin(), tempA.end());
        sort(tempB.begin(), tempB.end());
        if (tempA != tempB)
            return false;

        string key = a;
        key.push_back(' ');
        key.append(b);

        if(mp.find(key)!=mp.end()){
            return mp[key];
        }

        bool flag = false;
        int n = a.length();
        for (int i = 1; i <= n - 1; i++) {
            if ((solve(a.substr(0, i), b.substr(0, i)) &&
                 solve(a.substr(i), b.substr(i))) ||
                (solve(a.substr(0, i), b.substr(n - i)) &&
                 solve(a.substr(i), b.substr(0, n - i)))) {
                flag = true;
                break;
            }
        }
        return mp[key] = flag;
    }
    bool isScramble(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        }
        if (s1.empty() && s2.empty()) {
            return true;
        }
        return solve(s1, s2);
    }
};