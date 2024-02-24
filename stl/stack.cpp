#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("surbhi");
    s.push("adamya");
    s.push("nishka");
    cout<<s.size()<<endl;

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;

}