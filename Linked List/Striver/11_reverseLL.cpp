    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *forw = NULL;

        while(curr != NULL){
            forw = curr->next;
            curr->next = prev;
            // updation
            prev = curr;
            curr = forw;

        }

        return prev;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
