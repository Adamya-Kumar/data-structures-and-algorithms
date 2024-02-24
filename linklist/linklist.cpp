// static method allocation at stack..
//  Node obj(10);
//  cout<<obj.data<<" "<<obj.next<<endl;
// dynammmic memmory allocated in heap..
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memmory is free by destructor of : " << value << endl;
    }
};
void insertAtHead(Node *&head, int newNodeData)
{
    Node *newNode = new Node(newNodeData);
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node *&tail, int newNodeData)
{
    Node *newNode = new Node(newNodeData);
    tail->next = newNode;
    tail = newNode;
}
void insertAtAnyPosition(Node *&tail, Node *&head, int position, int newNodeData)
{

    // this is not a array this is a linklist so we start with at 1..
    int count = 1;
    Node *temp = head;
    // insert at first position..
    if (position == 1)
    {
        insertAtHead(head, newNodeData);
        return;
    }
    while (position - 1 > count)
    {
        temp = temp->next;
        count++;
    }
    // insert at last position..
    if (temp->next == NULL)
    {
        insertAtEnd(tail, newNodeData);
        return;
    }
    // insert at btw..
    Node *newNode = new Node(newNodeData);
    newNode->next = temp->next;
    temp->next = newNode;
}
void print(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
void deleteNodeAtPoisition(Node *&tail, Node *&head, int position)
{
    Node *temp = head;
    // delete the first node..
    if (position == 1)
    {
        head = temp->next;
        temp->next = NULL;
        delete (temp);
        return;
    }
    else
    {
        // delete the middle, last node..
        int cnt = 1;
        Node *pre = NULL;
        while (cnt < position)
        {
            pre = temp;
            temp = temp->next;
            cnt++;
        }
        pre->next = temp->next;
        if (temp->next == NULL)
        {
            tail = pre;
        }
        temp->next = NULL;
        delete (temp);
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *newNode = new Node(10);
    // cout<<newNode->data<<" "<<newNode->next<<endl..
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    // print(head);
    // insertAtEnd(tail, 99);
    // insertAtEnd(tail, 100);
    // print(head);
    // insertAtEnd(tail, 101);
    // insertAtEnd(tail, 102);
    // print(head);

    // insertAtAnyPosition(tail, head, 3, 12);
    // print(head);
    // insertAtAnyPosition(tail, head, 3, 12);

    insertAtEnd(tail, 20);
    insertAtEnd(tail, 30);
    insertAtEnd(tail, 40);
    insertAtEnd(tail, 50);
    insertAtEnd(tail, 60);
    insertAtEnd(tail, 70);
    insertAtEnd(tail, 80);
    insertAtEnd(tail, 90);
    insertAtEnd(tail, 100);
    print(head);
    cout << endl
         << "Delete the linklist.." << endl;

    deleteNodeAtPoisition(tail, head, 10);
    cout << tail->data << endl;
    print(head);
    deleteNodeAtPoisition(tail, head, 5);
    print(head);
    deleteNodeAtPoisition(tail, head, 4);
    deleteNodeAtPoisition(tail, head, 7);
    cout << tail->data << endl;
    print(head);
    return 0;
}