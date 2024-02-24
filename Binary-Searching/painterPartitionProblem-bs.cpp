#include <iostream>
using namespace std;
bool isPossibleSol(int arr[], int n, int m, int mid)
{
    int PainterCount = 1;
    int NumBoard = 0;
    for (int i = 0; i < n; i++)
    {
        if (NumBoard + arr[i] <= mid)
        {
            NumBoard += arr[i];
        }
        else
        {
            PainterCount++;
            NumBoard = 0;
            if (PainterCount > m || arr[i] > mid)
            {
                return false;
            }
            NumBoard = arr[i];
        }
    }
    return true;
}
int AllocatePainter(int arr[], int n, int m)
{
    int start = 0;
    int end = 0;
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        end += arr[i];
    }
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (isPossibleSol(arr, n, m, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return answer;
}
int main()
{
    int arr[] = {5, 5, 5, 5};
    int n = 4, m = 2;
    int Result = AllocatePainter(arr, n, m);
    cout << "The Result is : " << Result << endl;
    return 0;
}