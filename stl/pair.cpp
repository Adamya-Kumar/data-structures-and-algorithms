#include <bits/stdc++.h>
using namespace std;
void pair1()
{
    // for storing two values..
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    // for storing three values..
    pair<int, pair<int, int>> a = {1, {21, 43}};
    cout << a.first << " " << a.second.first << " " << a.second.second << endl;
    // for storing values in array..
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].first << " ";
        cout << arr[i].second << " ";
    }
}
int main()
{
    pair1();
    return 0;
}