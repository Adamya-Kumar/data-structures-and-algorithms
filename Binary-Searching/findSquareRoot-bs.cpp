#include <iostream>
using namespace std;
int FindSquareRootinIntger(int num)
{
    int start = 0;
    int end = num - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if ((mid * mid) == num)
        {
            return mid;
        }
        if ((mid * mid) > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
}
double valueInDecimal(int num, int accurate, int Intger)
{
    double factor = 1;
    double ans = Intger;
    for (int i=0;i<accurate;i++)
    {
    cout<<ans<<endl;

        factor /= 10;
        for (double j=ans;j*j<num;j=j+factor)
        {
            ans = j;
    cout<<ans;
        }
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the value : " << endl;
    cin >> num;
    // function call
    int result = FindSquareRootinIntger(num);
    double decimalResult = valueInDecimal(num, 2, result);
    cout << "Square Root of " << num << " is (in deicaml) : " << decimalResult << endl;
    return 0;
}