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
int getHeight(TreeNode* root)
{
    if(root==nullptr)
    return 0;
    int a=getHeight(root->left);
    int b=getHeight(root->right);
    return max(a,b)+1;
}
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
        return true;
        int lh=getHeight(root->left);
        int rh=getHeight(root->right);
        if(abs(lh-rh)>1)
        return false;
        bool a=isBalanced(root->left);
        bool b=isBalanced(root->right);
        return a&&b;

    }
};
