#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
vector<vector<int>> ans;
void subsetOfVector(vector<int> A,vector<int> temp,int index){
        if(A.size() == index){
            ans.push_back(temp);
            return;
        }
        //take..
        temp.push_back(A[index]);
        subsetOfVector(A,temp,index+1);
        //not take..
        temp.pop_back();
        subsetOfVector(A,temp,index+1);
        return;
}
int main(){
    vector<int> vecArray={1,2,3};
    vector<int> temp;
    sort(ans.begin(),ans.end());
    subsetOfVector(vecArray,temp,0);
return 0;
}