#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

public:
    Node(int newNodeData)
    {
        this->prev = NULL;
        this->data = newNodeData;
        this->next = NULL;
    }
    ~Node(){
        if(this->next != NULL){
            delete(next);
            this->next = NULL;
        }else if(this->prev!= NULL){
                delete(prev);
                this->prev =NULL;
        }
    }
};
Node *tail = NULL;
void insertAtHead(Node *&head, int newNodeData)
{
    Node *newNode = new Node(newNodeData);
    if (head == NULL)
    {
        tail = newNode;
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node *&head, int newNodeData)
{
    Node *newNode = new Node(newNodeData);
    if (tail == NULL && head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void insertAtBtwPosition(Node *&head, int newNodeData, int position)
{
    Node *newNode = new Node(newNodeData);
    if (position == 1)
    {
        insertAtHead(head, newNodeData);
        return;
    }
    int cnt = 1;
    Node *ptr = head;
    while (position != cnt)
    {
        ptr = ptr->next;
        cnt++;
    }
    if (ptr->next == NULL)
    {
        insertAtEnd(head, newNodeData);
        return;
    }
    newNode->prev = ptr->prev;
    ptr->prev->next = newNode;
    newNode->next = ptr;
    ptr->prev = newNode;
}
void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "this is an empty Linklist.." << endl;
        return;
    }
    else
    {
        Node *itr = head;
        while (itr != NULL)
        {
            cout << itr->data << " ";
            itr = itr->next;
        }
        cout << endl;
    }
}
void deleteAtHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "This is an empty linklist..." << endl;
        return;
    }
    Node *ptr = head;
    head = head->next;
    head->prev = NULL;
    delete (ptr);
}
void deleteAtEnd(Node *&head)
{
    if (head == NULL && tail == NULL)
    {
        cout << "This is an empty Linklist.." << endl;
        return;
    }
    Node *ptr = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete (ptr);
}
void deleteAtPosition(Node *&head, int position)
{
    if (position == 1)
    {
        deleteAtHead(head);
        return;
    }
    int cnt = 1;
    Node *ptr = head;
    while (position != cnt)
    {
        ptr = ptr->next;
        cnt++;
    }
    if (ptr->next == NULL)
    {
        deleteAtEnd(head);
        return;
    }

    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    delete (ptr);
}
int getLenghtLL(Node *head)
{
    Node *ptr = head;
    int cnt = 1;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        cnt++;
    }
    return cnt;
}
int main()
{
    Node *head = NULL;
    // insertAtHead(head,10);
    // insertAtHead(head,20);
    // insertAtHead(head,30);
    // insertAtHead(head,40);
    // insertAtHead(head,50);
    // print(head);
    //*******************************
    // print(head);
    insertAtEnd(head, 10);
    print(head);
    insertAtEnd(head, 20);
    print(head);
    insertAtEnd(head, 30);
    print(head);
    insertAtEnd(head, 40);
    print(head);
    insertAtEnd(head, 50);
    print(head);
    insertAtEnd(head, 60);
    print(head);
    // delete..
    insertAtBtwPosition(head, 999, 3);
    print(head);

    // delete the node..
    //  deleteAtHead(head);
    //  print(head);
    //  deleteAtEnd(head);
    //  print(head);
    deleteAtPosition(head, 3);
    print(head);
    int lenghtOfLL = getLenghtLL(head);
    cout << "this lenght of ll : " << lenghtOfLL << endl;
    return 0;
}