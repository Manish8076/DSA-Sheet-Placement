
void deleteNode(ListNode* node) {
   
        ListNode *current = node->next;
        node->val = current->val;
        node->next = current->next;
        current->next = NULL;

    }


// Time Complexity :- O(1)
// Space Complexity :- O(1)
