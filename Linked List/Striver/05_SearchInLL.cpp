int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.    

        while(head != NULL){
            if(head->data == k){
                return 1;
            } 
            head = head->next;
        }

    return 0;

}

// Time Complexity :- O(N)
// Space Complexity :- O(1)
