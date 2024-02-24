#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralPrinting(vector<vector<int>> martix)
{
    int row = martix.size();
    int col = martix[0]                   .size();
    // indexing
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    //
    int count = 0;
    int total = row * col;
    vector<int> ans;
    while (count < total)
    {
        for (int i = startingCol; count < total && i <= endingCol; i++)
        {
            ans.push_back(martix[startingRow][i]);

            count++;
        }
        startingRow++;
        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            ans.push_back(martix[i][endingCol]);

            count++;
        }
        endingCol--;
        for (int i = endingCol; count < total && i >= startingCol; i--)
        {
            ans.push_back(martix[endingRow][i]);

            count++;
        }
        endingRow--;
        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            ans.push_back(martix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}
int main()
{

    // vector<vector<int>> martix{
    //         {1,2,3},
    //         {4,5,6},
    //         {7,8,9}};
    int n;
    cin >> n;
    vector<vector<int>> martix(n, vector<int>(n, 0));
    int count =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
    cin>>martix[i][j];

        }
    }
cout<<endl;
    vector<int> ans = spiralPrinting(martix);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}