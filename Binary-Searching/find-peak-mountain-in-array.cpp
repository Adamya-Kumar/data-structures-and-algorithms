#include <iostream>
using namespace std;
int FindPeakMountainVal(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
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
    int arrayOdd[3] = {0, 11, 0};
    int arrayEven[4] = {0, 12, 91, 0};
    // For odd array..
    cout << "the peak mountain value in array is : " << arrayOdd[FindPeakMountainVal(arrayOdd, 3)]<<endl;
    // For even array..
    cout << "the peak mountain value in array is : " << arrayEven[FindPeakMountainVal(arrayEven, 4)]<<endl;
    return 0;
}