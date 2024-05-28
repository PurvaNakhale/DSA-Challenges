class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root){
        if(root == NULL){
            return 0;
        }
        
        int leftHt = height(root->left);
        int rightHt = height(root->right);
        
        return 1 + max(leftHt, rightHt);
    }
    
    bool isBalanced(Node *root)
    {
        if(!root) return true;
        
        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);
        int lh = height(root->left);
        int rh = height(root->right);
        
        bool diff = (abs(lh - rh) <= 1);
        
        if(leftAns && rightAns && diff)
            return true;
        else
            return false;
        
    }
};