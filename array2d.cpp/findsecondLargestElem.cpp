#include <iostream>
using namespace std;
int secondLargestNum(int arr[], int n){
    int Largest = arr[0];
    int secondLargest = 0;
    for (int i = 1; i < n; i++) {
        if (Largest < arr[i]) {
            secondLargest = Largest;
            Largest = arr[i];
    }
    }
    return secondLargest;
}
int main(){
    int arr[]={12,43,12,54,87,55,23,33};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result= secondLargestNum(arr,n);
    cout<<result<<endl;
return 0;
}