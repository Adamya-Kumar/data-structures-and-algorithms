#include <iostream>
using namespace std;
class QueueNode
{
public:
    int data;
    QueueNode *next;
    QueueNode(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
QueueNode *frontIndex = nullptr;
QueueNode *rearIndex = nullptr;
class Queue
{

public:
    int size = 0;
    void push_back(int);
    void pop_front();
    bool isEmpty();
    bool isFull();
    void peek();
    void isSize();
};
void Queue :: isSize(){
    if(size == 0){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"size of Queue is : "<<size<<endl;
    }
}
bool Queue ::isEmpty()
{
    if (frontIndex == nullptr)
    {
        return true;
    }
    else
        return false;
}
bool Queue :: isFull(){
    QueueNode* temp=new QueueNode(-1);
    if(temp== nullptr){
        return true;
    }else
        return false;
}
void Queue ::push_back(int value)
{
    if(isFull())
    {
        cout << "queue is full" << endl;
        return;
    }
    else
    {
    QueueNode *newNode = new QueueNode(value);
        if (frontIndex == nullptr)
        {
            frontIndex = newNode;
            rearIndex = newNode;
            size++;
            return;
        }
        else
        {
            rearIndex->next = newNode;
            rearIndex = newNode;
            size++;
        }
    }
}
void Queue ::peek()
{
    cout << "Front value is : " << frontIndex->data << endl;
}
void Queue ::pop_front()
{
    if (frontIndex == nullptr)
    {
        cout << "queue is empty" << endl;
        return;
    }
    else
    {
        QueueNode *temp = frontIndex;
        frontIndex = frontIndex->next;
        temp->next = nullptr;
        cout << temp->data << " is deleted into queue." << endl;
        size--;
        delete (temp);
    }
}
int main()
{
    Queue object;
    object.push_back(10);
    object.push_back(20);
    object.push_back(30);
    object.push_back(40);
    object.push_back(50);
    object.peek();
    object.pop_front();
    object.pop_front();
    object.pop_front();
    object.isSize();
    
}