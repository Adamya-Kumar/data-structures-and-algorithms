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
        return;
    }

    newNode->next =tail->next;
    tail->next= newNode;
    tail->next =tail->next;
}
void print(Node *&tail)
{
    if (tail->next == NULL)
    {
        cout << "this is an empty Linklist.." << endl;
        return;
    }
    else
    {
        Node *itr = tail->next;
        int cnt=1;
        while (cnt !=7)
        {
            cout << itr->data << " ";
            itr = itr->next;
            cnt++;
        }
        cout << endl;
    }
}
int main(){
    
    Node* tail =NULL;
    insertAtHead(tail,100);
    insertAtHead(tail,200);
    insertAtHead(tail,300);
    print(tail->next);
return 0;
}