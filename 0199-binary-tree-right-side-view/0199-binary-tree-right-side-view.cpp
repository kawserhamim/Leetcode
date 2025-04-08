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
    vector<int>ans;
      queue<TreeNode*> q;
    if(root != nullptr)q.push(root);
    q.push(nullptr);
    while(q.size())
    {
      TreeNode* x = q.front();
      q.pop();
      if(x == nullptr)
      {
          if(q.size())q.push(nullptr);
          else break;
      }else{
        if(x -> left)q.push(x -> left);
        if(x -> right)q.push(x -> right);
        if(q.front() == nullptr)ans.push_back(x->val);
      }
    }    
    return ans ;
    }
};