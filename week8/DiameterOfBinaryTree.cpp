class Solution {
public:
    int height(TreeNode* root, int &diameter){
        if(root == NULL){
            return 0;
        }

        int LH = height(root->left, diameter);
        int RH = height(root->right, diameter);

        diameter = max(diameter, RH+LH);

        return 1 + max(LH, RH);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }
};