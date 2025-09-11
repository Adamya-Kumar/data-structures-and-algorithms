#include <bits/stdc++.h>
using namespace std;
class combinationSum
{
public:
    vector<vector<int>> ans;
    void helper(vector<int> &key, int target, int i, int curSum, vector<int> temp);
    vector<vector<int>> Possiblecombination(vector<int> &key, int target);
};
vector<vector<int>> combinationSum ::Possiblecombination(vector<int> &key, int target)
{
    vector<int> temp;
    helper(key, target, 0, 0, temp);
    return ans;
}
void combinationSum ::helper(vector<int> &key, int target, int i, int curSum, vector<int> temp)
{
    if (curSum > target)
    {
        return;
    }
    if (i == key.size())
    {
        if (curSum == target)
        {
            ans.push_back(temp);
        }
        return;
    }
    // Inclusion.
    curSum += key[i];
    temp.push_back(key[i]);
    helper(key, target, i, curSum, temp);
    curSum -= key[i];
    temp.pop_back();
    // exlusion.
    helper(key, target, i + 1, curSum, temp);
}
int main()
{
    combinationSum o;
    vector<int> a = {2, 3, 6, 7};
    vector<vector<int>> res = o.Possiblecombination(a, 7);
    for (int i = 0; i < res.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "]";
    }
    return 0;
}