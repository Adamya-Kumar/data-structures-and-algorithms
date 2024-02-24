// A priority queue is a type of queue that arranges elements based on their priority values. Elements with higher priority values are typically retrieved before elements with lower priority values.
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
priority_queue<int> maxHeap;
//min Heap
priority_queue<int,vector<int>,greater<int> > minHeap;


maxHeap.push(6);
maxHeap.push(10);
maxHeap.push(7);
maxHeap.push(2);
maxHeap.push(8);
maxHeap.push(1);
int n = maxHeap.size();
for(int i=0;i<n;i++){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
}
//minheap
cout<<endl;
minHeap.push(6);
minHeap.push(10);
minHeap.push(7);
minHeap.push(2);
minHeap.push(8);
minHeap.push(1);
 n = minHeap.size();
for(int i=0;i<n;i++){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
}
    return 0;
}