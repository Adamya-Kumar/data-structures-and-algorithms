#include <iostream>
#define MAX 100000
using namespace std;
long long frontIndex = -1;
long long rearIndex = -1;
bool isEmpty()
{
    if (frontIndex == rearIndex)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull()
{
    if (rearIndex == MAX - 1 && frontIndex == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int queue[], int value)
{
    if (isFull())
    {
        cout << "queue is full" << endl;
    }
    else
    {
        rearIndex++;
        queue[rearIndex] = value;
    }
}
void pop(int queue[])
{
    if (isEmpty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        frontIndex++;
        cout << "this value is pop :" << queue[frontIndex] << endl;
        queue[frontIndex] = 0;
        if (frontIndex == rearIndex)
        {
            frontIndex = 0;
            rearIndex = 0;
        }
    }
}
int size()
{
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        return rearIndex - frontIndex;
    }
}
int main()
{
    int queue[MAX];
    // push
    push(queue, 10);
    push(queue, 20);
    push(queue, 30);
    push(queue, 40);
    // pop
    pop(queue);
    // size
    cout << size();
    return 0;
}