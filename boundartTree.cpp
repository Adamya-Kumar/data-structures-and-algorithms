#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(){}
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    void LeftSide(Node* root,vector<int>& ans){
        if((root == NULL)||(root->left == NULL && root->right == NULL))
            return;
            ans.push_back(root->data);
        if(root->left)
            LeftSide(root->left,ans);
        else
            LeftSide(root->right,ans);
    }
    void LeafNode(Node* root,vector<int>& ans){
        if(root  == NULL)
        return;
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
    }
        LeafNode(root->left,ans);
        LeafNode(root->right,ans);
    }
    void RightSide(Node* root,vector<int>& ans){
        if((root == NULL)||(root->left == NULL && root->right == NULL))
            return;
        if(root->right)
        RightSide(root->right,ans);
        else
        RightSide(root->left,ans);
        ans.push_back(root->data);
    }
    vector<int> boundaryNode(Node* root){
        vector<int> ans;
        ans.push_back(root->data);
        LeftSide(root->left,ans);
        LeafNode(root->left,ans);
        LeafNode(root->right,ans);
        RightSide(root->right,ans);
        return ans;
    }
};
int main(){
    Node obj;
   //           1
//        /     \
//      2         3
//     /  \      /  \
//    4    5    7    6
//   / \  / \        \
//  8   9 10 11       13

          Node* root = new Node(1);

        root->left = new Node(2);
        root->right = new Node(3);

        root->left->left = new Node(4);
        root->left->right = new Node(5);
        root->right->left = new Node(7);
        root->right->right = new Node(6);

        root->left->left->left = new Node(8);
        // root->left->left->left->right = new Node(44);
        root->left->left->right = new Node(9);
        root->left->right->left = new Node(10);
        root->left->right->right = new Node(11);
        // root->left->right->right->left = new Node(99);
        root->right->right->right = new Node(13);

    vector<int> ans=obj.boundaryNode(root);
    for(auto it: ans){
        cout<<it<<" ";
    }
return 0;
}