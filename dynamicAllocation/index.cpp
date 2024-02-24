#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
//dynamic allocation..
    int* arr =new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search: ";
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";   
    }

    delete []arr;
    return 0;
}




