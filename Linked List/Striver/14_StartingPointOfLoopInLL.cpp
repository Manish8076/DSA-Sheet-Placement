    ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow = head;
        ListNode *fast = head;

        if(head == NULL ||head->next == NULL || head->next->next == NULL){
            return NULL;
        }

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(fast == slow){
                fast = head;
                break;
            }
        }
        while(fast && fast->next){
            if(slow == fast){
                return slow;
            }
            fast = fast->next;
            slow = slow->next;
        }

        return NULL;

    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
