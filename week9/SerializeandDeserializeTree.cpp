class Codec {
public:
    
    // Encodes a tree to a single string.
    void ToString(TreeNode* root, string &tree){
        if(root == NULL){
            tree += "N ";
            return;
        }

        tree += to_string(root->val) + " ";
        ToString(root->left, tree);
        ToString(root->right, tree);  // Corrected here
    }

    string serialize(TreeNode* root) {
        string tree;
        ToString(root, tree);
        return tree;
    }

    TreeNode* ToBST(string &data, int &i){
        if(data[i] == 'N'){  // Corrected here
            i += 2;
            return NULL;
        }

        string temp = "";
        while(data[i] != ' '){
            temp += data[i++];
        }
        TreeNode* node = new TreeNode(stoi(temp));
        i++;
        node->left = ToBST(data, i);
        node->right = ToBST(data, i);

        return node;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int index = 0;
        return ToBST(data, index);
    }
};