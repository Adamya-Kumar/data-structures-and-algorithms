#include <bits/stdc++.h>
#include <iostream>
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
void LevelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {

        node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void preOrderTravesal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // nlr
    cout << root->data << " ";
    preOrderTravesal(root->left);
    preOrderTravesal(root->right);
}
void InOrderTravesal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // lnr
    InOrderTravesal(root->left);
    cout << root->data << " ";
    InOrderTravesal(root->right);
}
void postOrderTravesal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // lrn
    postOrderTravesal(root->left);
    postOrderTravesal(root->right);
    cout << root->data << " ";
}
void buildFromLevelOrder(node* root){
    queue<node*> q;
    cout<<"Enter the root node: ";
    int rootdata;
    cin>>rootdata;
    q.push
    if(root->data != -1){
        cout<<"Enter the data of left node and node is :"<<root->data<<endl;
        int leftdata;
        cin>>leftdata;
    }
    if(root->data != -1){
        cout<<"Enter the data of left node and node is :"<<root->data<<endl;
        int leftdata;
        cin>>leftdata;
    }
}
int main()
{
    node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = BuildTree(root);
    cout << "print the level order :-" << endl;
     LevelOrder(root);
    // print tree.
    preOrderTravesal(root);
    cout<<endl;
    InOrderTravesal(root);
    cout<<endl;
    postOrderTravesal(root);
    return 0;
}