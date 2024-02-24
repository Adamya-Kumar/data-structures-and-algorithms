#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void SelectionSort(int arr[], int size)
{
    int minIndex = 0;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
     for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
        cout<<endl;
    // SelectionSort(arr, n);
    bubblesort(arr,n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    return 0;
}