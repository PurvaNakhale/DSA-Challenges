class Solution{
  public:
    void checkDeadEnds(Node *root, unordered_set<int> &all_nodes, unordered_set<int> &leaf_nodes){
        if(root == NULL) return;
        
        if(!root->left && !root->right){
            leaf_nodes.insert(root->data);
        }
        
        all_nodes.insert(root->data);
        
        checkDeadEnds(root->left, all_nodes, leaf_nodes);
        checkDeadEnds(root->right, all_nodes, leaf_nodes);
    }
    
    bool isDeadEnd(Node *root)
    {
        //Your code here
        unordered_set<int> all_nodes, leaf_nodes;
        all_nodes.insert(0);
        checkDeadEnds(root, all_nodes, leaf_nodes);
        
        for(auto leafs : leaf_nodes){
            if(all_nodes.count(leafs+1) && all_nodes.count(leafs-1)){
                return true;
            }
        }
        
        return false;
    }
};