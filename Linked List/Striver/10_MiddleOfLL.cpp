    ListNode* middleNode(ListNode* head) {
        
        int count =0;
        ListNode *temp = head;
        while(temp!= NULL){
            count++;
            temp = temp->next;
        }
        int mid = count/2 + 1;

        count =0;
        temp = head;

        while(temp!=NULL){
            count ++;
            if(count == mid){
                break;
            }
            temp = temp->next;
        }
        return temp;
    }
// Time Complexity :- O(N)
// Spaace Complexity :- O(1)
