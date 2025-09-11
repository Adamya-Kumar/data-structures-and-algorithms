#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *BuildTree(node *root)
{
    cout << "Enter the data of :" << endl;
    int d;
    cin >> d;
    root = new node(d);
    if (d == -1)
    {
        return NULL;
    }
    cout << "Enter the data of left node :" << d << endl;
    root->left = BuildTree(root->left);

    cout << "Enter the data of right node :" << d << endl;
    root->right = BuildTree(root->right);

    return root;
}
int DepthOfTree(node *root, int level)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int lenleft = DepthOfTree(root->left, level + 1);
        int lenright = DepthOfTree(root->right, level + 1);

        if (lenleft > lenright)
        {
            return (lenleft + 1);
        }
        else
        {

            return (lenright + 1);
        }
    }
}
int countNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftNode = countNodes(root->left);
    int rightNode = countNodes(root->right);

    return leftNode + rightNode + 1;
}
int sumOfNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sumOfLeft = sumOfNodes(root->left);
    int sumOfRight = sumOfNodes(root->right);

    return sumOfLeft + sumOfRight + root->data;
}
int diameterOfTree(node* root){
    if(root == NULL){
        return 0;
    }
    int dia1=diameterOfTree(root->left);
    int dia2=diameterOfTree(root->right);
    int dia3=+dia2+1;
    int maxdiameter=Math.max(dia3,Math.max(dia1,dia2));
}
//  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
int main()
{
    node *head = NULL;
    head = BuildTree(head);
    // int depth = DepthOfTree(head, 0);
    // cout << "Depth of Tree is : " << depth << endl;
    cout << "Number of nodes in binary tree are : " << countNodes(head) << endl;
    cout << "Sum of nodes in binary tree are : " << sumOfNodes(head) << endl;
    return 0;
}