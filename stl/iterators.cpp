// C++ program to implement 
// the above approach
#include<bits/stdc++.h>
using namespace std;

// Function to display elements 
// of a set
void display(set<int> s)
{
set<int>::iterator itr;
int count=0;
// Displaying set elements
for (itr = s.begin(); 
	itr != s.end(); itr++) 
{
    count++;
	cout << *itr << " ";
}
cout<<"\nNumber of Elements in Set: "<<count<<endl;
} 

// Driver code
int main()
{
// Empty set container
set<int> s;

// Insert elements in random order
s.insert(10);
s.insert(20);
s.insert(30);
s.insert(40);
s.insert(50);

// Invoking function display()
// to display elements of set
display(s);
return 0;
}
