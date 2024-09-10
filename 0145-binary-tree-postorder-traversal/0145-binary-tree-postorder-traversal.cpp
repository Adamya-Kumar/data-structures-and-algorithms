/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL)
        return ans;
       
        stack<TreeNode*> stk1;
        stack<int> stk2;
        stk1.push(root);
        while(!stk1.empty()){
           TreeNode* temp = stk1.top();
            stk1.pop();
            if(temp->left!=NULL) stk1.push(temp->left);
            if(temp->right!=NULL) stk1.push(temp->right);
            cout<<temp->val<<" ";
            stk2.push(temp->val);
        }
        while(!stk2.empty()){
            int val=stk2.top();
            ans.push_back(val);
            stk2.pop();
        }
    return ans;
    }
};