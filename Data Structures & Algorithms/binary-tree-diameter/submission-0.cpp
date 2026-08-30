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
int diameter(TreeNode* root,int &ans) {
        if(root==nullptr)
        return 0;
        int lh=diameter(root->left,ans);
        int rh=diameter(root->right,ans);
        ans=max((lh+rh),ans);
        cout<<ans<<" ";
        //return  max((lh+rh),ans);
        return max(lh,rh)+1;
    }
int ans=0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int ans = 0;
    diameter(root, ans);
    return ans;
    }
};
