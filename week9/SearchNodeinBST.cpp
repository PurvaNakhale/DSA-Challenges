bool search(Node* root, int x) {
    // Your code here
    if(root == NULL) return false;
    if(x == root->data) return true;
    
    if(x > root->data){
        return search(root->right, x);
    }
    if(x < root->data){
        return search(root->left, x);
    }
    
    return false;
}