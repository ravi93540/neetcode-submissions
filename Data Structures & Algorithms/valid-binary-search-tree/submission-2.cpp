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
   bool fun(TreeNode* root,int &left,int &right)
   {
    if(!root)
    return true;
    if(root->val<=left || root->val>=right)
    return false;
    return (fun(root->left,left,root->val)&&fun(root->right,root->val,right));
   }
    bool isValidBST(TreeNode* root) {
        if(!root)
        return true;
    int left=INT_MIN;
   int right=INT_MAX;
    return fun(root,left,right);
    }
};
