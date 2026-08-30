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
    vector<int> ans;
public:

    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> q;
        TreeNode* curr=root;
        while(curr || !q.empty())
        {
            if(curr)
            {
                 ans.push_back(curr->val);
        
            q.push(curr->right);
            curr=curr->left;
            }
            else
            {
               curr=q.top();
                q.pop();
        
               
            }
        }
        return ans;
    }
};