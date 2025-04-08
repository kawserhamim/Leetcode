class Solution {
public:
    int maxDiameter = 0;

    int dfs(TreeNode* root) {
        if (root == nullptr) return 0;

        int left = dfs(root->left);    
        int right = dfs(root->right);  

       
        maxDiameter = max(maxDiameter, left + right);

       
        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxDiameter;
    }
};
