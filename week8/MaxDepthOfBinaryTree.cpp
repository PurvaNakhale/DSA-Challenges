class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int DepthL = maxDepth(root->left);
        int DepthR = maxDepth(root->right);
        return max(DepthL, DepthR)+1;
    }
};