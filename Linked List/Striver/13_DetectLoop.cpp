    bool hasCycle(ListNode *head) {
        ListNode *one = head;
        ListNode *two = head;

        if(head==NULL){
            return false;
        }
        if(head->next == NULL || head->next->next == NULL){
            return false;
        }

        while(one->next && two && two->next){
            one = one->next;
            two = two->next->next;
            if(one == two){
                return true;
            }
        }

        return false;
    }
// Time Complexity :- O(N)
// Space Complexity :- O(1)
