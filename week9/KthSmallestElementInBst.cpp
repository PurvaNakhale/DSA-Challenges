class Solution {
public:
    void Inorder(TreeNode* root, vector<int> &values){
        if(root == NULL) return;

        Inorder(root->left, values);
        values.push_back(root->val);
        Inorder(root->right, values);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> values;
        values.push_back(0);

        Inorder(root, values);

        int ans  = values[k];

        return ans;
    }
};