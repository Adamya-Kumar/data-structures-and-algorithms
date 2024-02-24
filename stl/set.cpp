#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(50);
    s.insert(50);
for(int i:s){
    cout<<i<<endl;
}
cout<<endl<<endl;
set<int>::iterator it =s.begin();
it++;
it++;
s.erase(it);
for(auto i:s){
    cout<<i<<endl;
}
cout<<"20 is present or not : "<<s.count(20)<<endl;
// set<int>::iterator itr = s.find(40);
set<int>::iterator itr = s.begin();
for(auto it =itr;it!=s.end();it++){
    cout<<*it<<endl;
}

    return 0;
}