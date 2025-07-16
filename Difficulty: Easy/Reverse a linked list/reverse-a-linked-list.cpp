/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
     Node* prev=NULL;
     Node* curr=head;
     Node* next=head->next;
     while(curr!=NULL){
         curr->next=prev;
         prev=curr;
         curr=next;
         if(next!=NULL)
         next=next->next;
     }
     return prev;
        
    }
};