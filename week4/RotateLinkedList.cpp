class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       if(!head) return NULL;

       int len = 1;
       ListNode* temp = head;
       while(temp->next){
           temp = temp->next;
           ++len;
       }

       temp->next = head;

       int position = len - (k % len);

       temp = head;
       while(position > 1){
          temp = temp->next;
          position--;
       }
       
       head = temp->next;
       temp->next = NULL;

       return head;
    }
};