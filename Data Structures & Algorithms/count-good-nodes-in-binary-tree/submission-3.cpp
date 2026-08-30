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
    
    int goodNodes(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int ans=0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,INT_MIN});
        while(!q.empty())
        {
            pair<TreeNode*,int> p=q.front();
            TreeNode* node=p.first;
            int temp=p.second;
            q.pop();
            if(node->val>=temp)
            ans++;
            if(node->left)
            q.push({node->left,max(temp,node->val)});
            if(node->right)
            q.push({node->right,max(temp,node->val)});
        }
        return ans;
    }
};
