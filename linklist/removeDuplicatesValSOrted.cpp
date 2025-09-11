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
        // cout << "memmory is free by destructor of : " << value << endl;
    }
};
void insertAtHead(Node *&head, int newNodeData)
{
    Node *newNode = new Node(newNodeData);
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node *&head, Node *&tail, int newNodeData)
{
    Node *newNode = new Node(newNodeData);

    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
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
        insertAtEnd(head, tail, newNodeData);
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
void RemoveDuplicateValSorted(Node *&head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *deleteNode = curr->next;
            deleteNode->next = NULL;
            delete (deleteNode);
            curr->next = next_next;
        }
        else
        {

            curr = curr->next;
        }
    }
}
void RemoveDuplicateValUnsorted(Node *&head)
{
}
int isPossible(Node *head, Node *mid)
{
    Node *ptr = mid->next;
    int cnt = 0;
    while (ptr != NULL)
    {
        if (ptr->data == head->data)
        {
            cnt++;
            ptr = ptr->next;
            head = head->next;
        }
        else
        {
            return -1;
        }
    }
    return cnt;
}
bool Findpal(Node *&head)
{
    if (head == NULL)
        return NULL;
    int end = 0;
    Node *ptr = head;
    while (ptr != NULL)
    {
        end++;
        ptr = ptr->next;
    }
    int start = 0;
    int mid = start + (end - start) / 2;
    ptr = head;
    int cnt = 1;
    while (cnt != mid)
    {
        ptr = ptr->next;
        cnt++;
    }
    // revsrse ll..
    Node *curr = ptr->next;
    Node *prev = NULL;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    ptr->next = prev;
    int key = isPossible(head, ptr);
    if (key == mid)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 7);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 1);

    print(head);
    //   RemoveDuplicateValSorted(head);
    //   print(head);
    //   RemoveDuplicateValUnsorted(head);
    if (Findpal(head))
    {
        cout << "this ll is panlidrom" << endl;
    }
    else
    {
        cout << "This ll is not panlidrom " << endl;
    }

    print(head);
    return 0;
}