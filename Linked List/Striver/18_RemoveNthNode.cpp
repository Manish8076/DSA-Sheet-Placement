    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next == NULL){
            return NULL;
        }
        
        ListNode *temp = head;
        int count = 0;
        while(temp ){
            count++;
            temp = temp->next;
        }
        int index = count -n;
        
        if(index == 0){
            head = head->next;
            return head;
        }

        count = 0;
        temp = head;

        while(temp && temp->next){
            count ++;
            if(count == index){
                temp->next = temp->next->next;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
// Tiem Complexity :- O(N)
// Space Complexity :- O(1)
