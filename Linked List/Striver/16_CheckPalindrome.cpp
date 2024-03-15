    bool isPalindrome(ListNode* head) {
        stack<int>st;

        ListNode *temp = head;

        while(temp){
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp){
            if(st.top() != temp->val){
                return false;
            }
            st.pop();
            temp = temp->next;
        }

        return true;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(N)
