void CeilInBST(Node* root, int x, int &ans){
    if(root == NULL) return;
    
    if(root->data >= x){
        ans = root->data;
        CeilInBST(root->left, x, ans);
    }
    else{
        CeilInBST(root->right, x, ans);
    }
}
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    if(input == root->data) return root->data;
    
    // Your code here
    int ans = -1;
    CeilInBST(root, input, ans);
    
    return ans;
    
}