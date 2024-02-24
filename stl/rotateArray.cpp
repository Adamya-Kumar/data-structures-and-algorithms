#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateArr(vector<int> v,int k){
    int n = v.size();
    vector<int> temp(n);
        for(int i=0;i<n;i++){
            temp[(i+k)%n] = v[i];
        }
    return temp;
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
int key=3;
    vector<int> ans = rotateArr(arr,key);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}