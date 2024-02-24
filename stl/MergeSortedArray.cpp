#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int n=5,m=3;
    int arr2[] = {2, 4, 6};
    int size = 8;
    int arr3[size];
    int k = 0, i = 0, j = 0;
    while (i < n && j < m)
    {

        if (arr1[i] > arr2[j])
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        else
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

while (j < m)
{
    arr3[k] = arr2[j];
    j++;
    k++;
}
    for(auto i:arr3){
        cout << i<<" ";
    }

return 0;
}