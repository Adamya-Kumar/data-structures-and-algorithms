#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("love");
    q.push("babber");
    q.push("kumar");
    q.push("adamya");
    cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    cout<<"after pop"<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}