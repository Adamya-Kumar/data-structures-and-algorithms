/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long>> qu;
        qu.push({root, 0});
        int maxWith = 0;
        while (qu.size() > 0) {
            int currLevelSize = qu.size();
           unsigned long long startIdx = qu.front().second;
           unsigned long long endIdx = qu.back().second;
            maxWith = max(maxWith, (int)(endIdx - startIdx + 1));
            for (int i = 0; i < currLevelSize; i++) {
                auto curr = qu.front();
                qu.pop();
                if (curr.first->left) {
                    qu.push({curr.first->left, curr.second * 2 + 1});
                }
                if (curr.first->right) {
                    qu.push({curr.first->right, curr.second * 2 + 2});
                }
            }

        }
        return maxWith;
    }
};