    ListNode* oddEvenList(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenhead = even;

        while( odd && odd->next && even && even->next){
          // odd and even ka next badho
            odd->next = odd->next->next;
            even->next = even->next->next;
          // update odd and even
            odd = odd->next;
            even = even->next;
        }
       // odd ko even se connect kar lo 
        odd->next = evenhead;

        return head;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
