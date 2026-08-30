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

    int maxPathSum(TreeNode* root) {
        int res=root->val;
        int a=fun(root,res);
        return res;
    }
    int fun(TreeNode* root,int& res)
    {
        if(!root)
        return 0;
        int left=max(0,fun(root->left,res));
        int right=max(0,fun(root->right,res));
        res=max(res,root->val+left+right);
        return root->val+max(left,right);
    }


};
