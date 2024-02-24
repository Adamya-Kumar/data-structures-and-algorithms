#include <iostream>
using namespace std;
int LinearSearchingArray(int array[], int size, int findValue)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == findValue)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int arrSize = 0;
    cout << "Enter the size of array : " << endl;
    cin >> arrSize;
    int Array[arrSize];
    cout << "Enter the data into a array : " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cin >> Array[i];
    }
    int findValue = 0;
    cout << "Enter the value you want to find in array : " << endl;
    cin >> findValue;
    int ResultIndex = LinearSearchingArray(Array, arrSize, findValue);
    if (ResultIndex == 0)
    {
        cout << " " << findValue << " is not Present in the array " << endl;
    }
    else
    {
        cout << findValue << " is Present at index " << ResultIndex << " in a array " << endl;
    }
    return 0;
}