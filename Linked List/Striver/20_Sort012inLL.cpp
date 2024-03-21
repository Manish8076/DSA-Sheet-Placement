void insertAtTail(Node* &tail, Node* &curr){
    tail->next = curr;
    tail = curr;
}


Node* sortList(Node *head){
    // Write your code here.

    Node *zerohead = new Node(-1);
    Node *zerotail  = zerohead;
    Node *onehead = new Node(-1);
    Node *onetail = onehead;
    Node *twohead = new Node (-1);
    Node *twotail = twohead;

    Node *curr = head;

    while(curr){
        int val = curr->data;
        if(val == 0){
            insertAtTail(zerotail, curr);
        } 
        else if (val == 1){
            insertAtTail(onetail, curr);
        }
        else if (val ==2){
            insertAtTail(twotail, curr);
        }
        curr = curr->next;
    }

    if(onehead->next != NULL) {    // zero list is not empty
        zerotail->next = onehead->next;
    }
    else{
        zerotail->next = twohead->next;

    }

    onetail->next = twohead->next;
    twotail->next = NULL;

    head = zerohead->next;

    // delete dummy node
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;

}

// Time Complexity :- O(N)
// Space Complexity :- O(1)
