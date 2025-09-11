#include <bits/stdc++.h>

using namespace std;
void insertArr(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] < temp)
    {
        v.push_back(temp);
        return;
    }
    int val = v[v.size() - 1];
    v.pop_back();
    insertArr(v, temp);
    v.push_back(val);
    return;
}
void SortArray(vector<int> &v)
{
    if (v.size() == 1)
        return;
    int temp = v[v.size() - 1];
    v.pop_back();
    sort(v.begin(), v.end());
    insertArr(v, temp);
}

int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    v.push_back(9);
    v.push_back(-4);
    // print data..
    SortArray(v);
    cout << "Sort the array : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}