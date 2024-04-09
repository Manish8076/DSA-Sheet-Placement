    int sizeofLL(ListNode *head){
        int cnt = 0;
        while(head != NULL){
            cnt++;
            head = head->next;
        }
        return cnt;
    }

    ListNode *reverseLL(ListNode *head, int k ,int length){
        if(length < k){
            return head;
        }

        if(head == NULL){
            return NULL;
        }

        // step 1 :- reverse first k groups
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *forw = NULL;
        int cnt = 0;

        while(curr != NULL && cnt < k){
            forw = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = forw;
            cnt++;
        }

        // step 2 reverse remaing
        if(forw != NULL){
            head->next = reverseLL(forw,k, length-k);
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int length = sizeofLL(head);
        return reverseLL(head,k,length);

    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
