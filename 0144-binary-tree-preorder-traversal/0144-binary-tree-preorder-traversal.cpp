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
        vector<int>ans;
    void hamim(TreeNode*root)
    {
     if(root == nullptr)return ;
    ans.push_back(root->val);
    if(root -> left)hamim(root -> left);
    if(root -> right)hamim(root -> right);    
    
   // return ;
    }
    vector<int> preorderTraversal(TreeNode* root) {
    hamim(root);
    return ans ;    
    }
};