#include <bits/stdc++.h>
using namespace std;
class phonepad_word
{
public:
    // vector<string> key={"","","ab","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wxyz"};
    vector<string> key = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    void helper(int a[], int N, string temp, int i);
    vector<string> possibleWords(int a[], int N);
};
vector<string> phonepad_word ::possibleWords(int a[], int N)
{
    helper(a, N, "", 0);
    return ans;
}
void phonepad_word ::helper(int a[], int N, string temp, int i)
{
    if (i == N)
    {
        ans.push_back(temp);
        return;
    }
    for (int j = 0; j < key[a[i]].size(); j++)
    {
        helper(a, N, temp + key[a[i]][j], i + 1);
    }
}
int main()
{
    phonepad_word obj;
    int a[] = {2, 3, 4};
    vector<string> res = obj.possibleWords(a, 3);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}