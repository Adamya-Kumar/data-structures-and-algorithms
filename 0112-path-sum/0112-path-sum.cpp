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
bool helper(TreeNode* root, int targetSum){
  if(root==NULL) return false;
  if(root->left==NULL && root->right==NULL){
      return targetSum-root->val ==0;
  }
  targetSum-=root->val;
  return helper(root->left,targetSum) || helper(root->right,targetSum);
 }
    bool hasPathSum(TreeNode* root, int targetSum) {

      return helper(root,targetSum);
    }
};