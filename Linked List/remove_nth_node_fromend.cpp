

class Solution {
public:

 ListNode* removeNthFromEnd(ListNode* head, int n) {
   ListNode *dum = new ListNode();
   dum->next = head;
   ListNode *first = dum;
   ListNode *second = dum;

   for(int i=1;i<=n ;i++){
       second = second->next;

       if(second == NULL){
           return NULL;
       }
    }

    while(second->next){
      
      first = first->next;
      second = second->next;
      
      }
     first->next = first->next->next; 

     
    
    return dum->next;
    
    }
};
