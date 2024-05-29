class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root == NULL) return ans;
        map<int, int> mp;
        queue<pair<Node*, int>>q;
        q.push({root, 0});
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            
            Node* node = temp.first;
            int line = temp.second;
            
            mp[line] = node->data;
            
            if(node->left != NULL){
                q.push({node->left, line-1});
            }
            if(node->right != NULL){
                q.push({node->right, line+1});
            }
        }
        
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};