#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition1(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start - 1;
    int j = end + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    // counting the element that are less the pivot value..
    int lessThanPivotVal = 0;
    for (int i = start +1; i <= end; i++)
    {
        if (pivot>arr[i])
        {
            lessThanPivotVal++;
        }
    }
    // set pivot at a correct position..
    int pivotIndex = start + lessThanPivotVal;
    swap(arr[pivotIndex], arr[start]);
    // condition..
    int i = start, j = end;
    while (i < arr[pivotIndex] && j > arr[pivotIndex])
    {
        while ( arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
        {
            j--;
        }
            if (i <= j)
        {
            swap(arr[i++], arr[j--]);
            
        }
        
    }
    return pivotIndex;
}
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = partition(arr, start, end);
    // left part
    quickSort(arr, start, pivot - 1);
    // right part
    quickSort(arr, pivot + 1, end);
}
int main()
{
    int arr[] = {5,76,23,65,4,4,5,4,1,1,2,2,2};
    int n = 13;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}