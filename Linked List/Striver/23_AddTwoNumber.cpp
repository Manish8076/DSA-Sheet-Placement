    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp = new ListNode(0);
        ListNode *tail = temp;
        int carry =0;

        while(l1 != NULL || l2 != NULL || carry != 0){
            int digit1 = (l1 != NULL) ? l1->val : 0;
            int digit2 = (l2 != NULL) ? l2->val : 0;
            
            int sum = digit1 + digit2 + carry;
            carry  = sum/10;
            sum = sum%10;

            ListNode *newTemp = new ListNode(sum);
            tail->next = newTemp;
            tail = tail->next;

            l1 = (l1 != NULL)?l1->next : NULL;
            l2 = (l2 != NULL)?l2->next : NULL;

        }
        return temp->next;
    }
// Time Complexity :- O(N)
// Space Complexity :- O(1)
