#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

void deleteAtPosition(Node* &head, int position){
    if(position ==  1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
       cout<<temp->data<<" ";
       temp = temp->next;
    }
    cout<<endl;
}

int main(){
    
    Node* node1 = new Node(15);
    Node* head = node1;
    Node* tail = node1;
    
    insertAtHead(head, 20);
    insertAtTail(tail, 26);
    insertAtPosition(head, tail, 1, 93);
    insertAtPosition(head, tail, 3, 37);
    insertAtPosition(head, tail, 6, 77);

    deleteAtPosition(head, 3);
    deleteAtPosition(head, 1);
    deleteAtPosition(head, 4);

    print(head);

    return 0;
}