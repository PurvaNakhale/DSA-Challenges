class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    // Optimized Approach
    int getMiddle(Node *head)
    {
        // Your code here
        
        Node* slow = head;
        Node* fast = head;
        
        if(head->next == NULL){
            return head->data;
        }
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(fast->next == NULL){
            return slow->data;
        }
        else{
            return slow->next->data;
        }
        
    }

    
    // Brute-Force Approach
    int getMiddle(Node *head)
    {
        if(head==NULL){
            return -1;
        }
        
        Node* temp = head;
        Node* ptr = head;
        int count = 1;
        
        while(temp->next!=NULL){
            temp = temp->next;
            count++;
        }
        
        int len = count / 2;
        
        
        for(int i=0; i<len; i++)
        {
            ptr = ptr->next;   
        }
       return ptr->data;
        
        
    }
};