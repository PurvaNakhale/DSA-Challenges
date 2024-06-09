class Solution
{
    public:
    void ReverseInorder(Node* root, int k, int &ans, int &node_count){
        if(root == NULL) return;
        
        ReverseInorder(root->right, k, ans, node_count);
        node_count++;
        if(node_count == k){
            ans = root->data;
            return;
        }
        ReverseInorder(root->left, k, ans, node_count);
        
    }
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int ans, node_count = 0;
        
        ReverseInorder(root, K, ans, node_count);
        
        return ans;
        
    }
};