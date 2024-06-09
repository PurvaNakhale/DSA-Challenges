class Solution {
public:
    bool isValid(TreeNode* root, long long l, long long r){
        if(root == NULL) return true;

        if(root->val < r && root->val > l){
            return (isValid(root->left, l, root->val) && (isValid(root->right, root->val, r)));
        }
        else return false;
    }
    bool isValidBST(TreeNode* root) {

        long long int min = -1000000000000, max = 1000000000000;
        return isValid(root, min, max);
    }
};