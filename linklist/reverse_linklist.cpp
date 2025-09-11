#include <iostream>
using namespace std;
//Node class..
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
//insert at end..
void insertAtEnd(Node *&head,Node* &tail, int data)
{
    // cout<<"insert"<<endl;
    Node* newNode = new Node(data);
    if (tail== NULL && head==NULL)
    {
        head=newNode;
        tail = newNode;
        return;
    }
   
    tail->next = newNode;
    tail=newNode;
}
//print data..
void print(Node *head)
{
    
    if (head == NULL)
    {
        cout << "linklist is empty" << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
//reverse ll..
void reverseLinklist(Node *&head,Node *&tail){
    Node* currPtr=head;
    Node* prevPtr=NULL;
    Node* nextPtr=NULL;
while(currPtr!=NULL){
    nextPtr=currPtr->next;
    currPtr->next=prevPtr;
    prevPtr=currPtr;
    currPtr=nextPtr;
}
tail=head;
head=prevPtr;

}
//starting point..
int main()
{
    Node *head = NULL;
    Node* tail=NULL;
    insertAtEnd(head,tail, 10);
    insertAtEnd(head,tail, 20);
    insertAtEnd(head,tail, 30);
    insertAtEnd(head,tail, 40);
    insertAtEnd(head,tail, 50);
    insertAtEnd(head,tail, 60);
    print(head);
    reverseLinklist(head,tail);
    print(head);
    cout<<head->data<<" "<<tail->data<<endl;


    return 0;
}