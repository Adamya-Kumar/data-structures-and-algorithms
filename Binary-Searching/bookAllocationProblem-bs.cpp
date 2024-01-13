#include <iostream>
using namespace std;
bool isPossibleSol(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            pageSum = 0;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int AllocateBookToStudent(int arr[], int n, int m)
{
    int answer = -1;
    int start = 0;
    int end = 0;
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
    int arr[] = {10, 20, 30, 40,50};
    int n = 4, m = 2;
    int result = AllocateBookToStudent(arr, n, m);
    cout << "Result is : " << result << endl;
    return 0;
}