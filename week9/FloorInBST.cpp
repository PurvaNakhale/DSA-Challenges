class Solution{

public:
    void floorOfBST(Node *root, int x, int &ans){
        if(root == NULL) return;
        
        floorOfBST(root->left, x, ans);
        floorOfBST(root->right, x, ans);
        if(root->data <= x){
            ans = max(ans, root->data);
        }
    }
    int floor(Node* root, int x) {
        // Code here
        int ans = -1;
        floorOfBST(root, x, ans);
        
        return ans;
    }
};