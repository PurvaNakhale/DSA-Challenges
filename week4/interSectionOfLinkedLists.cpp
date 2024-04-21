class Solution {
public:
    int length(ListNode *head){
        int cnt = 0;
        while(head){
            cnt++;
            head = head->next;
        }

        return cnt;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(!headA || !headB) return NULL;

        int lenA = length(headA);
        int lenB = length(headB);

        if(lenA > lenB){
            while(lenA > lenB){
                headA = headA->next;
                lenA--;
            }
        }
        else{
            while(lenB > lenA){
                headB = headB->next;
                lenB--;
            }
        }

        while(headA && headB){
            if(headA == headB){
                return headA;
                break;
            }
            headA = headA->next;
            headB = headB->next;
        }

        return NULL;

    }
};