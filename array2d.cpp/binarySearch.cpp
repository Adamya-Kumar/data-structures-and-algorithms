#include<iostream>
using namespace std;

int binaryMethod2d(int martix[][3],int row,int col,int target){
        int start = 0;
        int end = row * col;
        int mid = start + (end - start)/2;
        while (start <= end) {
            int element = martix[mid/col][mid%col];
            if(element == target){
                return mid;
            }
            if(element  < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return -1;
}
int main(){
    int key = 0;
    int martix[4][3]{1,3,5,7,10,11,16,20,22,30,34,60};
    cout<<"Enter the key you want to find : ";
    cin>>key;
    int mid = binaryMethod2d(martix,4,3,key);
        if(mid  == -1){
            cout<<"Element is not found in 2d array .."<<endl;
        }else{
            cout<<"The Element "<<key<<" is present at index ["<<mid/3<<"]["<<mid%3<<"]"<<endl;
        }

    return 0;
}