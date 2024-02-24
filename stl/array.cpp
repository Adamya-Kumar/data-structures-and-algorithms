#include<iostream>
#include<array>
using namespace std;
int main(){
    
    int arr1[4]={10,20,30,40};
    // we do not use stl array because it work as same and also have static properties..it is easy to use simple array..
    array<int,4> arr ={10,20,30,40};
    int size =arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"Element at fixed index : "<<arr.at(2)<<endl;
    cout<<"Empty or not : "<<arr.empty()<<endl;
    cout<<"first Element "<<arr.front()<<endl;
    cout<<"last Element "<<arr.back()<<endl;
}