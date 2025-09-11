#include <iostream>
using namespace std;
int powerof2(int n)
{
    // base case.
    if (n == 0)
    {
        return 1;
    }
    return 2 * powerof2(n - 1);
}
int fib(int n)
{
    // base case.
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    // recursion call.
    return fib(n - 1) + fib(n - 2);
}
int stairs(int n)
{
    // base case.
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    // recursive call.
    return stairs(n - 1) + stairs(n - 2);
}
class checking
{
public:
    int verification(string S, int start, int end)
    {
        if (start >= end)
        {
            return 1;
        }
        if (S[start] != S[end])
        {
            return 0;
        }
        return verification(S, start + 1, end - 1);
    }
};
class swaping
{
public:
    void swapArray(int *Arr, int start, int end)
    {
        if (start >= end)
        {
            return;
        }
        int temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        swapArray(Arr, start + 1, end - 1);
    }
};
class subset
{
public:
    void subseqeueces(string s, string temp, int index)
    {
        if (s.size() == index)
        {
            cout << "'" << temp << "'" << " ";
            return;
        }
        // taken
        subseqeueces(s, temp + s[index], index + 1);
        // not taken
        subseqeueces(s, temp, index + 1);
        return;
    }
};

int main()
{

    //    cout<< powerof2(4);
    // cout<<fib(6)<<endl;
    // cout<<stairs(10)<<endl;
    // checking obj;
    // string s = "123456";
    // int end = s.size() - 1;
    // int result=obj.verification(s, 0, end);
    // if(result){
    //     cout<<"String is correct"<<endl;
    // }else{
    //     cout<<"Srting is wrong"<<endl;
    // }
    // swaping obj1;
    // int arr[]={1,2,3,4,5,6};
    // int start=0;
    // int end=5;
    // obj1.swapArray(arr,start,end);
    // for(int i=0;i<=end;i++)
    // cout<<arr[i]<<" ";
    //************************************************
    string arr = "abc";
    subset set;
    set.subseqeueces(arr, "", 0);
    return 0;
}