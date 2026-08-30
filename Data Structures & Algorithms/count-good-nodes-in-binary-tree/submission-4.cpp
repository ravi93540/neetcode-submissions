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
    int fun(TreeNode* node,int val)
    {
        if(node==nullptr)
        return 0;
        int res=(node->val>=val)?1:0;
        val=max(val,node->val);
        res=res+fun(node->left,val);
        res=res+fun(node->right,val);
        return res;

    }
    int goodNodes(TreeNode* root) {
        if(root==nullptr)
        return 0;
        return fun(root,root->val);
    }
};
