#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
bool insertAtEnd(Node* &head,int data){
    if(head==NULL){
        return true;
    }if(head->next==NULL || head->next==head){
        return true;
    }
    Node* ptr=head;
 
} 
int main(){
    
return 0;
}