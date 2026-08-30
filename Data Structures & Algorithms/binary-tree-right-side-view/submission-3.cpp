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

    vector<int> rightSideView(TreeNode* root) {
        if(!root)
        return {};
         vector<int> ans;
         queue<TreeNode*> q;
         q.push(root);
         while(!q.empty())
         {
            int si=q.size();
            for(int i=1;i<=si;i++)
            {
                TreeNode* temp=q.front();
                if(i==si)
                ans.push_back(temp->val);
                q.pop();
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }

         }
         return ans;
    }
};
