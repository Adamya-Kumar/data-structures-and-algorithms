#include <iostream>
using namespace std;
int BinarySearchInArray(int Array[], int size, int key)
{
    int start = 0, end = size - 1;
    int midIndex = start + (end - start) / 2;
    while (start <= end)
    {
        if (Array[midIndex] == key)
        {
            return midIndex;
        }
        if (Array[midIndex] < key)
        {
            start = midIndex + 1;
        }
        else
        {
            end = midIndex - 1;
        }
        midIndex = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int array[size];
    cout << "Enter the data in array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int key;
    cout << "Enter the value you want to find in array : " << endl;
    cin >> key;
    // function call
    int ResultIndex = BinarySearchInArray(array, size, key);
    if (ResultIndex == -1)
    {
        cout << "Array do not contain value " << key << endl;
    }
    else
    {
        cout << array[ResultIndex] << " is Present at posistion " << ResultIndex + 1 << endl;
    }
    return 0;
}