#include <iostream>
using namespace std;
class Node
{
public:
    
    int data;
    Node *next;

public:
    Node(int newNodeData)
    {
        
        this->data = newNodeData;
        this->next = NULL;
    }

};
void insertAtHead(Node* &tail,int newNodeData){
Node* newNode=new Node(newNodeData);
    if(tail == NULL){
        tail=newNode;
        tail->next= tail;
        return;
    }
    newNode->next= tail->next;
    tail->next=newNode;
}
void print(Node* tail){
    Node* p=tail->next;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    } while (tail->next!=p);
    cout<<endl;
}
void insertAtEnd(Node* &tail,int newNodeData){
    Node* newNode=new Node(newNodeData);
    if(tail==NULL){
        tail=newNode;
        tail->next=tail;
        return;
    }
    newNode->next =tail->next;
    tail->next=newNode;
}
void insertAtbtwPosistion(Node* &tail,int data,int pos){
    Node* newNode=new Node(data);
    if(tail==NULL){
        tail=newNode;
        return;
    }
    int cnt=1;
    Node* ptr=tail->next;
    while(cnt!=pos-1){
        ptr=ptr->next;
        cnt++;
    }
    newNode->next=ptr->next;
    ptr->next=newNode;    
}
int main(){
    Node* tail=NULL;
    // insertAtHead(tail,10);
    // insertAtHead(tail,20);
    // insertAtHead(tail,30);
    // print(tail);
    //insert at end..
    insertAtEnd(tail,100);
    insertAtEnd(tail,200);
    insertAtEnd(tail,300);
    insertAtEnd(tail,400);
    insertAtEnd(tail,500);
    //print(tail);
    // insertAtbtwPosistion(tail,99,3);
    // print(tail);

return 0;
}