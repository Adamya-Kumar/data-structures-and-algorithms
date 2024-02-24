// there two way to solve
// 1) iterative method.
// 2) recursion method.

// 1) iterative method.
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b : " << endl;
    cin >> a>>b;
    cout<<"Greatest commman divisor : "<<gcd(a, b);

    return 0;
}
