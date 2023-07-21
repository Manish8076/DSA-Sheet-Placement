


class Solution {
public:


int size(ListNode *head){
    int ln = 0;
    ListNode *temp = head;

    while(temp != NULL){
        temp = temp->next;
        ln++;
    }
    return ln;
}



   ListNode *reversek(ListNode *head, int k , int length){

          if(length <k){
               return head;
           }

        // reverse first k node
        
        ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *forward = NULL;
        int count =0;
        
        while (current!=NULL && count <k){
            forward = current->next;
            current->next = prev;
            
            prev = current;
            current = forward;
            count++;
        }
        
        if(forward != NULL)
    {
        head->next = reverseKGroup(forward,count);
    }
return prev; 


   }

    ListNode* reverseKGroup(ListNode* head, int k) {

       int length = size(head);
       return reversek(head, k, length);

    }
};
