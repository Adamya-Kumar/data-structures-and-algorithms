#include <iostream>
#define MAX 5
using namespace std;
class Queue
{
public:
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
        if ((rearIndex == MAX - 1 && frontIndex == 0) || (rearIndex == frontIndex % MAX - 1))
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
        if (isFull() || (rearIndex == MAX - 1 && frontIndex != 0))
        {
            cout << "queue is full" << endl;
        }
        if (rearIndex == MAX - 1)
        {
            rearIndex = 0;
            queue[rearIndex] = value;
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
        if (frontIndex == MAX - 1)
        {
            frontIndex = 0;
        }
        else
        {
            frontIndex++;
            cout << "this value is pop :" << queue[frontIndex] << endl;

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
};

int main()
{
    Queue object;
    int *queue = new int[MAX];
    // push
    object.push(queue, 10);
    object.push(queue, 20);
    object.push(queue, 30);
    object.push(queue, 40);
    object.push(queue, 50);
    object.push(queue, 99);
    // pop(queue);
    // cout<<frontIndex<<" "<<queue[frontIndex]<<endl;
    // pop(queue);
    // cout<<frontIndex<<" "<<queue[frontIndex]<<endl;
    // pop(queue);
    // cout<<frontIndex<<" "<<queue[frontIndex]<<endl;
    // pop(queue);
    // cout<<frontIndex<<" "<<queue[frontIndex]<<endl;
    // pop(queue);
    // cout<<frontIndex<<" "<<queue[frontIndex]<<endl;
    cout << object.rearIndex << " " << queue[object.rearIndex] << endl;
    return 0;
}