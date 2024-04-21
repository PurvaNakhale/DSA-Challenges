class Solution {
public:
    ListNode* merge(ListNode* left, ListNode* right) {
    ListNode dummy(0);
    ListNode* curr = &dummy;

    while (left && right) {
        if (left->val <= right->val) {
            curr->next = left;
            left = left->next;
        } else {
            curr->next = right;
            right = right->next;
        }
        curr = curr->next;
    }

    if (left)
        curr->next = left;
    else
        curr->next = right;
        
    return dummy.next;
   }

ListNode* mergeSort(ListNode* head) {
    if (!head || !head->next)
        return head;

    ListNode* slow = head;
    ListNode* fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* mid = slow->next;
    slow->next = nullptr;

    ListNode* left = mergeSort(head);
    ListNode* right = mergeSort(mid);

    return merge(left, right);
}

ListNode* sortList(ListNode* head) {
    return mergeSort(head);
}

};