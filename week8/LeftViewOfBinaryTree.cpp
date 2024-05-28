void getLeftNode(Node *root, vector<int> &ans, int level){
    if(root == NULL){
       return;
    }
    
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    
    getLeftNode(root->left, ans, level+1);
    getLeftNode(root->right, ans, level+1);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   
   getLeftNode(root, ans, 0);
   
   return ans;
   
}