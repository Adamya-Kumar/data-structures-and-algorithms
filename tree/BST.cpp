#include <bits/stdc++.h>
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
Node *insertIntoNode(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
    {
        root->left = insertIntoNode(root->left, val);
    }
    else
    {
        root->right = insertIntoNode(root->right, val);
    }
    return root;
}
Node *makeBSTree(vector<int> arr)
{
    Node *root = NULL;
    for (auto val : arr)
    {
        root = insertIntoNode(root, val);
    }
    return root;
}
void InorderInBSTree(Node *root)
{
    if (root == NULL)
        return;
    InorderInBSTree(root->left);
    cout << root->data << " ";
    InorderInBSTree(root->right);
}
bool serachInBSTree(Node *root, int key)
{
    if (root == NULL)
        return false;
    if (root->data == key)
        return true;
    bool leftVal, rightVal;
    if (key < root->data)
    {
        leftVal = serachInBSTree(root->left, key);
    }
    else
    {
        rightVal = serachInBSTree(root->right, key);
    }
    return leftVal || rightVal;
}
Node* deleteNodeInBSTree(Node* root,int key){
    if(root == NULL)return NULL;
    if(key<root->data){
        root->left = deleteNodeInBSTree(root->left,key);
    }else if(key > root->data){
        root->right = deleteNodeInBSTree(root->right,key);
    }else{
        if(root->left == NULL && root->right ==NULL){
            delete root;
            return NULL;
        }else if((root->left !=NULL && root->right==NULL)||(root->left==NULL && root->right!=NULL)){
           Node* temp;
            if(root->left !=NULL && root->right==NULL){
                temp=root->left;
            }else{
            temp=root->right;
            }
            delete root;
                return temp;
        }else{
            Node*IS =getIS(root,key);
        }
    }
}
int main()
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    Node *root = makeBSTree(arr);
    InorderInBSTree(root);
    int key = 4;
    if (serachInBSTree(root, key))
    {
        cout << "\nThis BSTree have " << key << "\n";
    }
    else
    {
        cout << "\nThis BSTree not have " << key << "\n";
    }
    return 0;
}