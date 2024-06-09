class Solution
{
    public:
        Node* insert(Node* node, int data) {
        
            // Your code goes here
            if(node == NULL){
                return new Node(data);
            }
            if(data < node->data){
                node->left = insert(node->left, data);
            }
            if(data > node->data){
                node->right = insert(node->right, data);
            }
            return node;
            
    }

};