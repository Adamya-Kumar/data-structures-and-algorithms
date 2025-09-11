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
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftNode = height(root->left);
    int rightNode = height(root->right);
    return leftNode + rightNode + 1;
}
int diameterOfTree(node* root){
    if(root == NULL){
        return 0;
    }
    int leftTree=diameterOfTree(root->left);
    int rightTree=diameterOfTree(root->right);
    int rootTree= height(root->left) + height(root->right) + 1;
    if(leftTree > rightTree){
        if(leftTree > rootTree){
            return leftTree;
        }else{
            return rootTree;
        }
    }else{
        if(rightTree > rootTree){
            return rightTree;
        }else{
            return rootTree;
        }
    }
}
int main()
{
    node *root = NULL;
    root = BuildTree(root);
    cout << "height of tree : " << height(root);
    cout << "diameter of tree : " << diameterOfTree(root);
    return 0;
}