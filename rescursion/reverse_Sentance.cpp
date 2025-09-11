#include <iostream>
#include <stack>
using namespace std;
void revesreSentance(string s)
{
    stack<string> Stack;
    string word = "";
    for (int i = 0; i < Stack.size(); i++)
    {
        while (s[i] != ' ' && i < Stack.size())
        {
            word += s[i];
            i++;
        }
        Stack.push(word);
    }
    // print the stack data..
    while (!Stack.empty())
    {
        cout << Stack.top();
        Stack.pop();
    }
}
int main()
{
    string s = "hey, who are you doing?";
    revesreSentance(s);
    return 0;
}