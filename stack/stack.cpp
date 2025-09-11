#include <iostream> 
using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        this->size=size;
        arr=new int[size];
        top= -1;
    }
    void push(int element){
        if(size-1<=top){
            cout<<"stack is overflow "<<endl;
            return;
        }
        top++;
        cout<<top<<endl;
        arr[top]=element;

    }
    void pop(){
        if(top==-1){
            cout<<"stack is Underflow "<<endl;
            return;
        }
        top--;

    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }else{
            return -1;
        }
    }
    bool Empty(){
        if(top<0){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    stack st(5);
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);
    // st.push(99);
    st.pop();
    cout<<st.peek();

    
    
return 0;
}