Node* constructLL(vector<int>& arr) {
    // Write your code here

    Node *ll = new Node(arr[0]);

    Node *tail = ll;

    for(int i=1; i< arr.size(); i++){
        Node *temp = new Node(arr[i]);
        tail->next = temp;
        tail = temp;
    }
    return ll;
}

// Time Complexity :- O(N)
// Space Complexity :- O(N)
