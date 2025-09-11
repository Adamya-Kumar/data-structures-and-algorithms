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
void insertAtEnd(Node *&head, Node *&tail, int data)
{
    // cout<<"insert"<<endl;
    Node *newNode = new Node(data);
    if (tail == NULL && head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}
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
Node *findMidNode(Node *head)
{
    Node *fast = head->next;
    Node *slow = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtEnd(head, tail, 10);
    insertAtEnd(head, tail, 20);
    insertAtEnd(head, tail, 30);
    insertAtEnd(head, tail, 40);
    insertAtEnd(head, tail, 50);
    print(head);
    Node *midNode = findMidNode(head);
    cout << "this is Middle list : ";
    while (midNode != NULL)
    {
        cout << midNode->data << " ";
        midNode = midNode->next;
    }

    return 0;
}