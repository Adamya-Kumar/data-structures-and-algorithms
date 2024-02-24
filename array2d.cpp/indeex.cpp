#include<iostream>
using namespace std;
int LinearMethod(int arr[][3],int n,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         if(arr[i][j] ==  key){
            return key;
         }
        }
        
    }
    return -1;
}
int main(){

    int arr[3][4]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        
    }
    int sum =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum += arr[i][j]; 
        }
        arr[i][3] = sum;
    }
       for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int i=0,temp=0;
    while(i< 3){
        if(arr[i][3] > temp){
                temp = arr[i][3];
        }
        i++;
    }
        cout<<"this  is max sum of rows is "<<temp<<endl;
    return 0;
}