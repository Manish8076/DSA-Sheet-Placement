

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    
  /*  if(head == NULL || head->next == NULL){
        return NULL;
    }
  
    ListNode *slow = head;
    ListNode *fast = head;

    while(fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
           break;        
        }

    }

    if(slow != fast){
        return NULL;
    }
    
    slow = head;

    while(slow!= fast){
    
    slow= slow->next;
    fast = fast->next;
    }
   

   return slow;
*/
    
   if(head == NULL || head->next == NULL){
        return NULL;
    }
  
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *entry = head;

    while(fast->next!= NULL && fast ->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
                while(slow != entry){
                    slow = slow->next;
                    entry = entry->next;
                }
            return entry;
        }

    }
   return NULL;
  }
};
