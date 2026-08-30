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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)
        return root;
        TreeNode* curr=root;
        TreeNode* parent=nullptr;
        while(curr && curr->val!=key)
        {
            parent =curr;
            if(curr->val>key)
            {
                curr=curr->left;
            }
            else 
            {
                
                curr=curr->right;
                
            }
            
        }
        if(!curr)
        return root;

    if (curr->left && curr->right) {
            TreeNode* successorParent = curr;
            TreeNode* successor = curr->right;

            // Find inorder successor (smallest in right subtree)
            while (successor->left) {
                successorParent = successor;
                successor = successor->left;
            }

            curr->val = successor->val;  // Copy successor's value
            // Now delete the successor node
            curr = successor;
            parent = successorParent;
        }

        // Case 2 and 3: Node has 0 or 1 child
        TreeNode* child = (curr->left) ? curr->left : curr->right;

        if (!parent) {
            // Deleting the root node
            delete curr;
            return child;
        }

        if (parent->left == curr)
            parent->left = child;
        else
            parent->right = child;

        delete curr;
        return root;
    }
};