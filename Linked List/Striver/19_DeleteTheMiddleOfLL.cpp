    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return NULL;
        }

        int count = 0;
        ListNode *temp = head;
        while(temp ){
            count++;
            temp = temp->next;
        }
        int index = count/2;
        count = 0;
        temp = head;
        while(temp){
            count++;
            if(count == index){
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
// Time Complexity :- O(N)
// Space Complexity :- O(1)
