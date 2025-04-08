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
    int x = -1000000000 ;
    int hamim(TreeNode * root)
    {
      if(root  == nullptr)return 0 ;

    int u = hamim(root -> left);
    int v = hamim(root -> right);
    int y = max(u,v);
    int h = u + v ;
    
    if(h < y) h = y ;
    int g = root -> val ;
    if(h > 0) g += h ;
    x = max(g , x);
    return max(root -> val, root -> val + max(u,v));
    }
    int maxPathSum(TreeNode* root) {
    int k = hamim(root);
    
    return  x;

    }
};