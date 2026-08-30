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
  bool fun(TreeNode* root,long long lh,long long rh)
  {
    if(!root)
    return true;
    if(root->val<=lh || root->val>=rh)
    return false;
    return (fun(root->left,lh,root->val) && fun(root->right,root->val,rh));
  }
    bool isValidBST(TreeNode* root) {
    long long lh=-10000000000000000;
    long long rh=10000000000000000;
    return fun(root,lh,rh);
    }
};
