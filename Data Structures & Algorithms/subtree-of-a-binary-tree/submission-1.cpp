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
  bool fun(TreeNode* root,TreeNode* subRoot)
  {
    if(!root)
    return !subRoot;
    if(!subRoot)
    return !root;
    if(root->val!=subRoot->val)
    return false;
    return (fun(root->left,subRoot->left) && fun(root->right,subRoot->right));
  }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if(!root)
    return false;
    if(!subRoot)
    return true;
    if(fun(root,subRoot))
    return true;
    return (isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot));
    
    }
};
