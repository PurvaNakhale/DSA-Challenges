class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void InorderTraversalOfBT(Node *root, vector<int> &values){
        if(root == NULL) return;
        
        InorderTraversalOfBT(root->left, values);
        values.push_back(root->data);
        InorderTraversalOfBT(root->right, values);
    }
    
    void sortedInorder(Node *root, vector<int> &values, int &index){
        if(root==NULL) return;
        
        sortedInorder(root->left, values, index);
        root->data = values[index++];
        sortedInorder(root->right, values, index);
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int> values;
        
        InorderTraversalOfBT(root, values);
        
        sort(values.begin(), values.end());
        
        int index = 0;
        sortedInorder(root, values, index);
        
        return root;
    }
};