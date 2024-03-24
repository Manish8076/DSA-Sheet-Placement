    void reorderList(ListNode* head) {
          if (!head || !head->next || !head->next->next) return;

        // Find the middle of the list
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow=slow->next;
            fast=fast->next->next;
        }

        // Reverse the second half of the list
        ListNode *prev =NULL, *cur=slow->next, *Next;
        while (cur) {
            Next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=Next;
        }
        slow->next=NULL;

        // Merge the 2 halves
        ListNode *A = head, *B=prev;
        while (A && B) {
            ListNode* A_next=A->next;
            ListNode *B_next=B->next;

            A->next=B;
            B->next=A_next;

            A=A_next;
            B=B_next;
        }
    }
// Time Complexity :- O(N)
// Space Complexity :- O(1)
