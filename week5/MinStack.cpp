class MinStack {
private:
   struct Node{
      int data;
      int min;
      Node* next;

      Node(int d, int m, Node* nxt){
        data = d;
        min = m;
        next = nxt;
      }
   };
   Node* head;

public:
    MinStack(){
        head = NULL;
    }
    
    void push(int val) {
        if(head == NULL){
            head = new Node(val, val, NULL);
        }
        else{
            head = new Node(val, min(head->min, val), head);
        }
    }
    
    void pop() {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    int top() {
        return head->data;
    }
    
    int getMin() {
        return head->min;
    }
};
