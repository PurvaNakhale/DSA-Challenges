class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.empty()){
            return nullptr;
        }

        priority_queue<int, vector<int>, greater<int>> pq;
        ListNode* head = new ListNode(-1);
        ListNode* temp = head;

        for(int i=0; i<lists.size(); i++){
            ListNode* node = lists[i];
            while(node!=NULL){
                pq.push(node->val);
                node = node->next;
            }
        }

        while(!pq.empty()){
            ListNode* newNode = new ListNode(pq.top());
            pq.pop();
            head->next=newNode;
            head = head->next;
        }

        return temp->next;
    }
};