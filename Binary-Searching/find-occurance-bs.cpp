#include <iostream>
using namespace std;
int ans = -1;
int firstOcc(int Array[], int size, int key)
{
    int ans = -1;
    int start = 0, end = size - 1;
    int midIndex = start + (end - start) / 2;
    while (start <= end)
    {
        if (Array[midIndex] == key)
        {
            ans = midIndex;
            end = midIndex - 1;
        }
       else if (Array[midIndex] < key)
        {
            start = midIndex + 1;
        }
        else
        {
            end = midIndex - 1;
        }
        midIndex = start + (end - start) / 2;
    }
    return ans;
}


int lastOcc(int Array[], int size, int key)
{
    int start = 0, end = size - 1;
    int midIndex = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (Array[midIndex] == key)
        {
            ans = midIndex;
            start = midIndex + 1;
        }
        else if(Array[midIndex] < key)
        {
            start = midIndex + 1;
        }
        else
        {
            end = midIndex - 1;
        }
        midIndex = start + (end - start) / 2;
    }
    return ans;
}
void printData(int first,int last,int total){
    cout<<"First occurance at index "<<first<<endl;
    cout<<"Last occurance at index "<<last<<endl;
    cout<<"Total number of occurance in array "<<total<<endl;
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
int IndexOfFirst=firstOcc(array, size, key);
int IndexOfLast=lastOcc(array, size, key);
int totalNumOfOcc=(IndexOfLast-IndexOfFirst)+1;
printData(IndexOfFirst,IndexOfLast,totalNumOfOcc);

    return 0;
}