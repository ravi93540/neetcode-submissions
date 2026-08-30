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
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(!root)
        return {};
        q.push(root);
        while(!q.empty())
        {
            vector<int> temp;
            int si=q.size();
            for(int i=1;i<=si;i++)
            {
                TreeNode* te=q.front();
                q.pop();
                temp.push_back(te->val);
                if(te->left)
                q.push(te->left);
                if(te->right)
                q.push(te->right);

            }
            ans.push_back(temp);
        }
        return ans;

    }
};
