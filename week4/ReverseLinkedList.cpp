class Solution
{
    // Recursive
    public:
    void reverse(struct Node* &head, struct Node* curr, struct Node* prev){
        
        // base case
        if(curr == NULL){
            head = prev;
            return;
        }
        
        Node* forward = curr->next;
        reverse(head, forward, curr);
        curr->next = prev;
    }
    
    struct Node* reverseList(struct Node *head)
    {
        Node* prev = NULL;
        Node* curr = head;
        reverse(head, curr, prev);
        return head;
        
    }
    

    // Iterative
    public:
    struct Node* reverseList(struct Node *head)
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* next;
        
        while(curr != NULL){
            next = curr->next;
            curr->next  = prev;
            
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
};