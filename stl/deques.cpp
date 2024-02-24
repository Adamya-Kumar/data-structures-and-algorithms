//  deque, short for double-ended queue, is an abstract data type that generalizes a queue and allows elements to be added to or removed from either the front (head) or back (tail).
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(20);
    d.push_front(1);

    d.push_back(30);
    d.push_front(2);

    d.push_back(40);
    d.push_front(3);

    d.push_back(50);
    d.push_front(4);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    // //pop

    //     d.pop_front();
    //     d.pop_front();
    //     d.pop_front();
    //     //
    //     d.pop_back();
    //     d.pop_back();
    //       for(int i:d){
    //         cout<<i<<" ";
    //     }
    d.erase(d.begin(),d.begin()+1);
    for (int i : d)
    {
        cout << i << " ";
    }
    return 0;
}