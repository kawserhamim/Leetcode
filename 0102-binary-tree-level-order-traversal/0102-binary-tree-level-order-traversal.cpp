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
    vector<vector<int>>ans ;
    vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*>q;
    vector<int>v ;
    if(root == nullptr)return ans ;
    q.push(root);
    q.push(nullptr);
    while(q.size())
    {
        TreeNode* f = q.front();
        q.pop();
        if(f != nullptr)
        {
           v.push_back(f -> val);
           if(f->left)q.push(f->left);
           if(f->right)q.push(f->right);
        }else{
          ans.push_back(v);
          v.clear();
          if(q.size())q.push(nullptr);
        }
    }
    return ans ;
    }
};