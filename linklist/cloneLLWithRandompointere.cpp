#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *random;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};
void insertAtEnd(Node *&head, Node *&tail, int newdata)
{
    Node *newNode = new Node(newdata);
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void printLL(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
Node *copyTheLL(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout<<"This is empty linklist try again!"<<endl;
    }
    else
    {
        Node *cloneHead = NULL;
        Node *cloneTail = NULL;
        Node *temp = head;
        while (temp != NULL)
        {
            insertAtEnd(cloneHead, cloneTail, temp->data);
            temp = temp->next;
        }

        return cloneHead;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtEnd(head, tail, 1);
    insertAtEnd(head, tail, 2);
    insertAtEnd(head, tail, 3);
    insertAtEnd(head, tail, 4);
    insertAtEnd(head, tail, 5);
    insertAtEnd(head, tail, 6);
    Node *ans = copyTheLL(head, tail);
    printLL(ans);
    return 0;
}