// User function Template for C++
class Solution {
  public:
    void printPattern(int N) {
        // Write Your Code here
        for(int i=1;i<=N;i++){
            for(int j=1;j<=i;j++)
            cout<<'*';
        cout<<" ";
        }
    }
};