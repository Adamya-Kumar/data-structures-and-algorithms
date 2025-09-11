#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class stack
{
public:
    void push(Node *&head, int val);
    void pop(Node *&head);
    void print(Node *head);
    bool isEmpty(Node* head);
};
bool stack:: isEmpty(Node* head){
    if(head == NULL){
        return true;
    }else{
        return false;
    }
}
void stack:: pop(Node* &head){
    if(isEmpty(head)){
        cout<<"stack is empty we can not pop form stack "<<endl;
        return;
    }else{
        Node*del=head;
        head=del->next;
        cout<<"this value is delete form stack : "<<del->data<<endl;
        delete(del);
    }
}
void stack::push(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void stack::print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    stack o;
    o.push(head, 10);
    o.push(head, 20);
    o.push(head, 30);
    o.push(head, 40);
    o.print(head);
    o.pop(head);
    o.pop(head);
    o.pop(head);
    o.pop(head);
    o.pop(head);
    o.print(head);
    return 0;
}