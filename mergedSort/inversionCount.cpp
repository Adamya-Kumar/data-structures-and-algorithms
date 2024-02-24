#include <iostream>
#include<vector>
using namespace std;
int merged(int arr[],int start,int end){
    int inv=0;
    int mid =start + (end-start)/2;
    int len1 = mid -start +1;
    int len2 = end - mid;
    //allocation
    int*first = new int[len1];
    int*second = new int[len2];
    //set values
    int iterator = start;
    for(int i=0;i<len1;i++)
        first[i] = arr[iterator++];
    for(int i=0;i<len2;i++)
        second[i]= arr[iterator++];
    //merg the array
    iterator =start;
    int index1=0,index2=0;
    while(index1< len1 && index2 < len2){
        if(first[index1]<second[index2]){
            arr[iterator++]= first[index1++];
        }else{
            arr[iterator++]= second[index2++];
            inv+=len1-index1;
        }
    }
    while(index1<len1){
        arr[iterator++]= first[index1++];
    }
    while(index2<len2){
        arr[iterator++]= second[index2++];
    }
    return inv;
}
int inversionCountInMergSort(int arr[],int start,int end){
   int inv =0;
    if(start<end){
    int mid = start + (end - start)/2;
    //left part
    inv += inversionCountInMergSort(arr,0,mid);
    //right part
    inv += inversionCountInMergSort(arr,mid+1,end);
    //merging part
    inv += merged(arr,start,end);
    }
    return inv;
}
int main(){
    int arr[]={8, 4, 2, 1};
    int n = 4;
    int start =0;
    int end =n-1;
    for(auto i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
   cout<<"Inversion in array is : "<< inversionCountInMergSort(arr,start,end)<<endl;
    
return 0;
}