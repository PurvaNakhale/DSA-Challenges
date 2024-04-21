// Given the head of a linked list, remove the nth node from the end of the list and return its head.
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]

class Solution {
public:
    // Brute-Force:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* curr = head;
        while(curr != NULL){
            len++;
            curr = curr->next;
        }
        curr = head;

        int position = len -n-1;

        if(position < 0){
            head = head->next;
            delete curr;
            return head;
        }

        while(position--){
            curr = curr->next;
        }
        
        ListNode* forward = curr->next;
        curr->next = curr->next->next;
        delete forward;

        return head;

    }

    // Two-Pointer:
    ListNode* fast = head;
       ListNode* slow = head;
       while(n>0){
        fast = fast->next;
        n--;
       }
       if(!fast) return head->next;
       while(fast->next){
        slow = slow->next;
        fast = fast->next;
       }
       slow->next = slow->next->next;
       return head;
};