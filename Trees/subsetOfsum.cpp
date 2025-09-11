#include <bits/stdc++.h>
using namespace std;
bool subsetOfSum(vector<int> A, int sum, int tempSum, int index)
{
    if (index >= A.size())
    {
        return false;
    }
    if (tempSum == sum)
    {
        return true;
    }
    // taken..
    bool value1 = subsetOfSum(A, sum, tempSum + A[index], index + 1);
    cout<<value1<<endl;
    // not taken.
    bool value2 = subsetOfSum(A, sum, tempSum, index + 1);
    cout<<value2<<endl;
    return value1 || value2;
}
int main()
{
    vector<int> A = {3, 34, 4, 12, 5, 2};
    int Sum = 9;
    bool result = subsetOfSum(A, Sum, 0, 0);
    if (result)
        cout << Sum << " is present is this array" << endl;
    else
        cout << Sum << " is not present is this array" << endl;
    return 0;
}