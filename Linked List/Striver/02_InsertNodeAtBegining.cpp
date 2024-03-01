

Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here

    Node *temp = new Node(newValue);

    temp->next = list;
    list = temp;


    return list;
}

// Time Complexity :- O(N)
// Space Complexity :- O(1)
