#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    // vec.push_back(10);
    // vec.push_back(20);
    // vec.push_back(30);
    // vec.push_back(40);

//push_front()-->error
    // vec.push_front(10);
    // vec.push_front(20);
    // vec.push_front(30);
    // vec.push_front(40);

//    int size = vec.size();
// for(int i=0;i<size;i++){
//     cout<<vec[i]<<"\t";
// }

//     cout<<endl;
//     cout<<"Element at fixed index : "<<vec.at(2)<<endl;
//     cout<<"Empty or not : "<<vec.empty()<<endl;
//     cout<<"first Element "<<vec.front()<<endl;
//     cout<<"last Element "<<vec.back()<<endl;


cout<<"before clear size"<<endl;
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;
vec.clear();
cout<<"after clear size"<<endl;
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;
}