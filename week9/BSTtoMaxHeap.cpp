class Solution{
  public:
    void Inorder(Node *root, vector<int> &vals){
        if(root == NULL) return;
        
        Inorder(root->left, vals);
        vals.push_back(root->data);
        Inorder(root->right, vals);
    }
    
    void buildTree(Node* root, vector<int> &vals, int &n){
        if(root == NULL || n > vals.size()) return;
        
        root->data = vals[n--];
        buildTree(root->right, vals, n);
        buildTree(root->left, vals, n);
    }
    
    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        vector<int> vals;
        Inorder(root, vals);
        int n = vals.size()-1;
        
        buildTree(root, vals, n);
        
    }    
};