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
void reverse(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
Node *add(Node *first, Node *second)
{
    Node *sumHead = NULL;
    Node *sumTail = NULL;
    int carry = 0;

    while (first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;
        insertAtEnd(sumHead, sumTail, digit);
        carry = sum / 10;
        first = first->next;
        second = second->next;
    }

    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;
        insertAtEnd(sumHead, sumTail, digit);
        carry = sum / 10;
        first = first->next;
    }

    while (second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum % 10;
        insertAtEnd(sumHead, sumTail, digit);
        carry = sum / 10;
        second = second->next;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        insertAtEnd(sumHead, sumTail, digit);
        carry = sum / 10;
    }

    return sumHead;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    // first LL
    insertAtEnd(head1, tail1, 4);
    insertAtEnd(head1, tail1, 5);
    // second LL
    insertAtEnd(head2, tail2, 3);
    insertAtEnd(head2, tail2, 4);
    insertAtEnd(head2, tail2, 5);
    // step 1--reverse LL
    reverse(head1);
    reverse(head2);
    // step2 --create sum LL and add the sum value..
    Node *ans = add(head1, head2);
    // step3--reverse LL
    reverse(ans);
    // print the sum LL

    printLL(ans);
}