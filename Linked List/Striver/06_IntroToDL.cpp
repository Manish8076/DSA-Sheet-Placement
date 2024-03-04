
Node* constructDLL(vector<int>& arr) {
    // Write your code here

    Node *DL = new Node (arr[0]);
    Node *tail = DL;
    for(int i=1; i<arr.size();i++){

        Node *temp =  new Node (arr[i]);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;

    }
    return DL;

}

// Time Complexity :- O(N)
// Space Complexity :- O(1)
