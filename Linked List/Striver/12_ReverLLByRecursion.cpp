    void recursion(ListNode *&head, ListNode *curr, ListNode *prev){
        
        if(curr == NULL){
            head = prev;
            return;
        }

        recursion(head,curr->next, curr);

        curr->next = prev;

    }

    

    ListNode* reverseList(ListNode* head) {

        ListNode *curr = head;
        ListNode *prev = NULL;
        recursion(head, curr, prev);

        return head;

    }

// Time Complexity :- O(N)
// Space Complextiy :- O(1)
