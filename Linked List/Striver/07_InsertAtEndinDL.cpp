Node * insertAtTail(Node *head, int k) {
    // Write your code here

    if(head == NULL){
        Node *temp = new Node(k);
        head = temp;
        return head;
    }

    Node *tail =head;
    while(tail->next != NULL){
        tail = tail->next;
    }

    Node *temp = new Node(k);
    tail->next = temp;
    temp->prev = tail;

    return head;
}
// Time Complexity :- O(N)
// Space Complexity :- O(1)
