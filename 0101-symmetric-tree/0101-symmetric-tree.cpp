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
    bool hamim(TreeNode*a,TreeNode*b)
    {
      if(!a and !b)return true ;
     
      if(!a || !b)return false ;
       if(a->val != b->val)return false ;
      bool bonmala = hamim(a->left,b->right) and hamim(a->right , b->left);
      return bonmala ;
    }
    bool isSymmetric(TreeNode* root) {
    bool bb = hamim(root,root);    
    return bb ;
    }
};