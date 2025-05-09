class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return nullptr;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } else {
            // Node found
            if (!root->left) return root->right;
            if (!root->right) return root->left;

            // Both children exist
            TreeNode* temp = root->right;
            while (temp->left) temp = temp->left; // Find min in right subtree
            root->val = temp->val; // Replace value
            root->right = deleteNode(root->right, temp->val); // Delete the duplicate
        }

        return root;
    }
};
