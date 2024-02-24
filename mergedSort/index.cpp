#include <iostream>
using namespace std;
void merged(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // create new array
    int *first = new int[len1];
    int *second = new int[len2];
    // copy the value..
    int iterator = s;
    for (int i = 0; i < len1; i++)
        first[i] = arr[iterator++];
    for (int i = 0; i < len2; i++)
        second[i] = arr[iterator++];
    // merge the two sorted array..
    int index1 = 0;
    int index2 = 0;
    iterator = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[iterator++] = first[index1++];
        }
        else
        {
            arr[iterator++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[iterator++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[iterator++] = second[index2++];
    }
}
void mergersort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // left part is sorter
    mergersort(arr, s, mid);
    // right part is sorter
    mergersort(arr, mid + 1, e);
    // merging part
    merged(arr, s, e);
}
int main()
{
    int arr[] = {2, 5, 1, 6, 9};
    int si = 0;
    int ei = 4;
    mergersort(arr, si, ei);
    for (int i = 0; i < ei + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}