#include <iostream>
using namespace std;
int BinarySearchInArray(int Array[], int start, int end, int key)
{

    int midIndex = start + (end - start) / 2;
    while (start <= end)
    {
        if (Array[midIndex] == key)
        {
            return midIndex;
        }
        if (Array[midIndex] < key)
        {
            start = midIndex + 1;
        }
        else
        {
            end = midIndex - 1;
        }
        midIndex = start + (end - start) / 2;
    }
    return -1;
}
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
    int target;
    int arr[] = {7, 9, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pivot = FindPivotVal(arr, size);
    int key;
    cout << "Enter the key you want to find in array " << endl;
    cin >> key;
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        target = BinarySearchInArray(arr, pivot, size - 1, key);
    }
    else
    {
        target = BinarySearchInArray(arr, 0, pivot - 1, key);
    }
    if (target == -1)
    {
        cout << "Key is not Persent in array ." << endl;
    }
    else
    {
        cout << "the Result " << arr[target] << " at index : " << target << endl;
    }
    return 0;
}