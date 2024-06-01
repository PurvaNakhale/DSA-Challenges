class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset < int >>> nodes;
        queue<pair<TreeNode*,pair<int,int>>> q;
        vector<vector<int>> ans;
        

        if(root == NULL){
            return ans;
        }

        q.push(make_pair(root,make_pair(0,0)));

        while(!q.empty()){
            TreeNode* f = q.front().first;
            int hd = q.front().second.first;
            int lvl = q.front().second.second;
            q.pop();

            nodes[hd][lvl].insert(f->val);

            if(f->left){
                q.push(make_pair(f->left,make_pair(hd-1,lvl+1)));
            }
            if(f->right){
                q.push(make_pair(f->right,make_pair(hd+1,lvl+1)));
            }


        }

         for (auto p: nodes) {
                vector < int > col;
                for (auto q: p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
                }
                ans.push_back(col);
            }

        return ans;
    }
};