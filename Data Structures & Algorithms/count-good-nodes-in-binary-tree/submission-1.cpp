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
    int fun(TreeNode* node,int maxval)
    {
        if(node==nullptr)
        return 0;
        int res=(node->val>=maxval)?1:0;
        maxval=max(maxval,node->val);
        res+=fun(node->left,maxval);
        res+=fun(node->right,maxval);
        
        return res;
    }
    int goodNodes(TreeNode* root) {
        if(root==nullptr)
        return 0;
        
        return fun(root,root->val);
       
    }
};
