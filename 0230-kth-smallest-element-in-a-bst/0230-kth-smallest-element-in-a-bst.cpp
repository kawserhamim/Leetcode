class Solution {
public:
    int count = 0;
    int result = -1;

    void inOrder(TreeNode* root, int k) {
        if (!root) return;

        inOrder(root->left, k);

        count++;
        if (count == k) {
            result = root->val;
            return;
        }

        inOrder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inOrder(root, k);
        return result;
    }
};
