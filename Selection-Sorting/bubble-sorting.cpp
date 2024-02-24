#include <iostream>
using namespace std;
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSorting(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {12, 3, 9, 1, 7, 4};
    bubbleSorting(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
}