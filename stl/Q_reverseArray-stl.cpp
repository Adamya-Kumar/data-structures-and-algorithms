#include <iostream>
#include <vector>
using namespace std;
vector<int> reverseArray(vector<int> v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        swap(v[i], v[j]);
        i++;
        j--;
    }
    return v;
}
int main()
{
    int temp, n;
    vector<int> arr;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    cout << "Enter the data into array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    cout << "\nThe original array is: ";
      for (auto i : arr)
    {
        cout << i << " ";
    }
    vector<int> ans = reverseArray(arr);
    cout << "\nThe reversed array is: ";
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}