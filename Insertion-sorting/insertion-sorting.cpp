#include <iostream>
using namespace std;
void insertionSorting(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    int n = 7;
    insertionSorting(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}