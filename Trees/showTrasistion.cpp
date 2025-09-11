#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to traverse the binary tree and count transitions
int countTransitions(TreeNode* root) {
    if (root == NULL)
        return 0;
    
    int transitions = 0;
    if (root->left != NULL)
        transitions++;
    if (root->right != NULL)
        transitions++;
    
    transitions += countTransitions(root->left);
    transitions += countTransitions(root->right);
    
    return transitions;
}

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(5);
    root->right->right = new TreeNode(0);
    root->left->left = new TreeNode(7);
    root->left->left->left = new TreeNode(0);
    root->left->left->right = new TreeNode(0);

    root->left->right = new TreeNode(11);
    root->left->right->left = new TreeNode(0);
    root->left->right->right = new TreeNode(0);

    root->right->left=new TreeNode(17);
    root->right->left->left=new TreeNode(0);
    root->right->left->right=new TreeNode(0);
    
    
    // Count transitions
    int numTransitions = countTransitions(root);
    
    cout << "Number of transitions needed to traverse the binary tree: " << numTransitions*2 << endl;
    
    return 0;
}
