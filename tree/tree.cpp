#include <iostream>
#include <queue>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
static int idx = -1;
// create Tree
Node *createTree(vector<int> arr)
{
    idx++;
    if (arr[idx] == -1)
        return NULL;
    Node *root = new Node(arr[idx]);
    root->left = createTree(arr);
    root->right = createTree(arr);
    return root;
}
// perOrder
void perOrder(Node *root)
{
    if (root == NULL)
    {
        cout << -1 << " ";
        return;
    }
    cout << root->data << " ";
    perOrder(root->left);
    perOrder(root->right);
}
// inOrdre
void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
// postOrder
void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
void levelOrder(Node *root)
{
    queue<Node *> qu;
    qu.push(root);
    qu.push(NULL);
    while (qu.size() > 0)
    {
        Node *curr = qu.front();
        qu.pop();

        if (curr == NULL)
        {
            if (!qu.empty())
            {
                cout << "\n";
                qu.push(NULL);
                continue;
            }
            else
            {
                break;
            }
        }
        cout << curr->data << " ";
        if (curr->left != NULL)
        {
            qu.push(curr->left);
        }
        if (curr->right != NULL)
        {
            qu.push(curr->right);
        }
    }
    cout << "\n";
}
int heightOfTree(Node *root)
{
    if (root == NULL)
        return 0;
    int Hleft = heightOfTree(root->left);
    int Hright = heightOfTree(root->right);

    return max(Hleft, Hright) + 1;
}
int countNodesInTree(Node *root)
{
    if (root == NULL)
        return 0;

    int leftCnt = countNodesInTree(root->left);
    int rightCnt = countNodesInTree(root->right);

    return leftCnt + rightCnt + 1;
}
bool twoIdenticallTree(Node *Tree1, Node *Tree2)
{
    if (Tree1 == NULL || Tree2 == NULL)
        return Tree1 == Tree2;

    bool leftTree = twoIdenticallTree(Tree1->left, Tree2->left);
    bool rightTree = twoIdenticallTree(Tree1->right, Tree2->right);
    return (leftTree && rightTree && Tree1->data == Tree2->data);
}
int sumOfTree(Node *root)
{
    if (root == NULL)
        return 0;
    int leftSum = sumOfTree(root->left);
    int rightSum = sumOfTree(root->right);

    return leftSum + rightSum + root->data;
}
Node *findRootNode(Node *root, int val)
{
    if (root == NULL)
        return NULL;
    if (root->data == val)
    {
        return root;
    }
    Node *leftSide = findRootNode(root->left, val);
    Node *rightSide = findRootNode(root->right, val);
    if (leftSide != NULL)
    {
        return leftSide;
    }
    if (rightSide != NULL)
    {
        return rightSide;
    }
}
bool findSubTree(Node *root, Node *find)
{
    Node *findNode = findRootNode(root, find->data);
}
int diameterOfTree(Node *root)
{ // O(n*n) => O(n^2)
    if (root == NULL)
        return 0;

    int lDiam = diameterOfTree(root->left);
    int rDiam = diameterOfTree(root->right);
    int currDiam = heightOfTree(root->left) + heightOfTree(root->right); // O(n)

    return max(lDiam, max(rDiam, currDiam));
}
static int ans = 0;
int updateDiameterOfTree(Node *root)
{
    if (root == NULL)
        return 0;
    int leftHt = updateDiameterOfTree(root->left);
    int rightHt = updateDiameterOfTree(root->right);
    ans = max(leftHt + rightHt, ans);
    return (leftHt + rightHt) + 1;
}
void topViewOfTree(Node *root)
{ // O(nlogn)
    queue<pair<Node *, int>> qu;
    map<int, int> mp;

    qu.push({root, 0});
    while (qu.size() > 0)
    {
        Node *curr = qu.front().first;
        int currHD = qu.front().second;
        qu.pop();

        if (mp.find(currHD) == mp.end())
        {
            mp[currHD] = curr->data;
        }

        if (curr->left != NULL)
        {
            qu.push({curr->left, currHD - 1});
        }

        if (curr->right != NULL)
        {
            qu.push({curr->right, currHD + 1});
        }
    }

    for (auto x : mp)
    {
        cout << x.second << " ";
    }
}
void KthLevelOfTree(Node *root, int k)
{
    queue<pair<Node *, int>> qu;

    qu.push({root, k});
    while (qu.size() > 0)
    {
        Node *curr = qu.front().first;
        int kth = qu.front().second;
        qu.pop();
        if (kth == 1)
            cout << curr->data << " ";
        if (curr->left != NULL)
        {
            qu.push({curr->left, kth - 1});
        }
        if (curr->right != NULL)
        {
            qu.push({curr->right, kth - 1});
        }
    }
}
void recuriveKthLevelOfTree(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 1)
    {
        cout << root->data << " ";
        return;
    }
    recuriveKthLevelOfTree(root->left, k - 1);
    recuriveKthLevelOfTree(root->right, k - 1);
}
int sumofTreeTranform(Node *root)
{
    if (root == NULL)
        return 0;
    int leftSubTree = sumofTreeTranform(root->left);
    int rightSubTree = sumofTreeTranform(root->right);
    root->data = leftSubTree + rightSubTree + root->data;
    return root->data;
}
void pathOfTree(Node *root, vector<vector<int>> &ans, vector<int> &temp)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(temp);
        return;
    }
    if (root->left != NULL)
    {
        temp.push_back(root->left->data);
        pathOfTree(root->left, ans, temp);
        temp.pop_back();
    }
    if (root->right != NULL)
    {
        temp.push_back(root->right->data);
        pathOfTree(root->right, ans, temp);
    }
}
int main()
{
    vector<int> genTree = {1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, 8, -1, -1, 7, -1, -1};
    Node *root = createTree(genTree);
    // perOrder(root);
    // inOrder(root);
    // postOrder(root);
    levelOrder(root);
    // cout<<heightOfTree(root)<<"\n";
    // cout<<countNodesInTree(root)<<"\n";
    // cout<<sumOfTree(root)<<"\n";
    // Node* root1=new Node(1);
    // root->left=new Node(2);
    // root->right=new Node(3);
    // root->right->left=new Node(6);
    // if(twoIdenticallTree(root,root1))cout<<"True"<<"\n";
    // else cout<<"False"<<"\n";
    // cout<<diameterOfTree(root)<<"\n";
    // cout<<ans<<"\n";
    // topViewOfTree(root);
    // KthLevelOfTree(root,3);
    // cout<<sumofTreeTranform(root);
    vector<vector<int>> ans;
    vector<int> temp;
    temp.push_back(root->data);
    pathOfTree(root, ans, temp);
    cout << "\n";
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << "\n";
    }
    return 0;
}
/*
        1               root,left,right
     2    3
 4    5  6   7          1,2,4,-1,-1,5,-1,-1,3,6,-1,8,-1,-1,7,-1,-1
-1 -1    8
*/
