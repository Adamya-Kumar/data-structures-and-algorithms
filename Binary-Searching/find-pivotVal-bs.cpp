#include <iostream>
using namespace std;
int FindPivotVal(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int arrayOdd[] = {7,9,1,2,3}; 
    int arrayEven[] = {10, 20, 30, 1};
    // For odd array..
    cout << "the peak mountain value in array is : " << arrayOdd[FindPivotVal(arrayOdd, 5)]<<endl;
    // For even array..
    cout << "the peak mountain value in array is : " << arrayEven[FindPivotVal(arrayEven, 4)]<<endl;
    return 0;
}