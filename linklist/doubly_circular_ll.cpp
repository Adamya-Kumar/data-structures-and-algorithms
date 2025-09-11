#include <iostream>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    public:
    Node(int data){
        this->prev=NULL;
        this->data=data;
        this->next=NULL;
    }
};
void insertAthead(Node* &head,int newData){
    Node* newNode=new Node(newData);
    if(head==NULL){
        head=newNode;
        newNode->next=head;
        newNode->prev=head;
        return;
    }
    newNode->next= head;
    newNode->prev=head->prev;
    head->prev=newNode;
    newNode->prev->next=newNode;

}
void insertAtEnd(Node* &head,int data){
    Node* newNode=new Node(data);
    if(head== NULL){
        head=newNode;
        head->next=newNode;
        head->prev=newNode;
        return;
    }
    head->prev->next=newNode;
    newNode->prev=head->prev;
    newNode->next=head;
    head->prev=newNode;
}
void insertAtAnyPos(Node* &head,int data,int pos){
    Node* newNode=new Node(data);
    int cnt=1;
    Node* ptr=head;
    while(pos!=cnt){
        ptr=ptr->next;
        cnt++;
    }
    ptr->prev->next=newNode;
    newNode->prev=ptr->next;
    newNode->next=ptr;
    ptr->prev=newNode;

}
void print(Node* head){
    Node* ptr=head;
   do{
    cout<<ptr->data<<" ";
    ptr=ptr->next;
   }while(head!=ptr);
    cout<<endl;
}

int main(){
        Node* head=NULL;
        // insertAthead(head,10);
        // insertAthead(head,20);
        // insertAthead(head,30);
        // print(head);

        //insert at end..
        insertAtEnd(head,90);
        insertAtEnd(head,91);
        insertAtEnd(head,92);
        insertAtEnd(head,93);
        insertAtEnd(head,94);
        insertAtEnd(head,95);
        print(head);

         //insert at btw..
         insertAtAnyPos(head,21,3);
         print(head);

return 0;
}