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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr)
        return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> temp;
            int si=q.size();
            for(int i=1;i<=si;i++)
            {
                TreeNode* tree=q.front();
                q.pop();
                temp.push_back(tree->val);
                if(tree->left)
                q.push(tree->left);
                if(tree->right)
                q.push(tree->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
