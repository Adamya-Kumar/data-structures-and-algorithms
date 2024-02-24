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
    int maxi = -1;
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    end = maxi;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (isPossibleSol(arr, n, m, mid))
        {
            answer = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return answer;
}
int main()
{
    int arr[] = {4, 2, 1, 3, 6};
    int n = 5, m = 2;
    int Result = AllocatePainter(arr, n, m);
    cout << "The Result is : " << Result << endl;
    return 0;
}