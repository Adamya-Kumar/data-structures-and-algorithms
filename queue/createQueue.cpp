#include <iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(15);
    q.push(25);
    q.push(30);
    q.push(40);
    cout<<"front element is : "<<q.front()<<endl;
    cout<<"the size is : "<<q.size()<<endl;
    q.pop();
    cout<<"front Element is : "<<q.front()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }else
        cout<<"queue is not empty"<<endl;

return 0;
}