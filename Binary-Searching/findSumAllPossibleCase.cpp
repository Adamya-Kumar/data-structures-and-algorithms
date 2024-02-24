#include <iostream>
#include <vector>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sort(int arr[], int size)
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
vector<pair<int, int>> findSum(int arr[], int target, int n)
{
    sort(arr, n);
    vector<pair<int, int>> ans;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            ans.push_back(make_pair(arr[start], arr[end]));
            start++;
            end--;
        }
        else if (arr[start] + arr[end] > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    if (ans.size() == 0)
    {
        ans.push_back(make_pair(-1, -1));
    }
    return ans;
}
int main()
{
    int target;
    int arr[5] = {1, -1, -1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the target  value: ";
    cin >> target;
    vector<pair<int, int>> ans = findSum(arr, target, n);
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}