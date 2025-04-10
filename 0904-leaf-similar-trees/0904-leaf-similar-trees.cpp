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
    vector<int>v, vv;
     void hamimm(TreeNode* root2)
    {
        if(root2->left==nullptr and root2->right == nullptr)
        {
            vv.push_back(root2->val);
            return ;
        }
        if(root2->right)hamimm(root2->right);
        if(root2->left)hamimm(root2->left);
        return ;
    }
    void hamim(TreeNode* root1)
    {
        if(root1->left==nullptr and root1->right == nullptr)
        {
            v.push_back(root1->val);
            return ;
        }
        if(root1->right)hamim(root1->right);
        if(root1->left)hamim(root1->left);
        return ;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    hamim(root1);    
    hamimm(root2);
     if(v.size() != vv.size())return false ;
     for(int i =0 ; i < v.size() ; i++)
     {
        if(v[i] != vv[i])return false ;
     }
     return true ;
    }
};