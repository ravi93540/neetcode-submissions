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
   
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root)
        return {};
        vector<int> ans;
        stack<TreeNode*> se;
        TreeNode* curr=root;
        while(curr || !se.empty())
        {
            if(curr)
            se.push(curr);
            if(curr)
            curr=curr->left;
            if(!curr)
            {
                TreeNode* temp=se.top();
                ans.push_back(temp->val);
                se.pop();
                curr=temp->right;
            }

        }

        return ans;
    }
};