

class Solution {
public:



    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      
     unordered_map<ListNode*,int>m;

    while(headA != NULL){
        m[headA]++;
        headA = headA ->next;
    }

    while(headB != NULL){
        if(m[headB] == 1){
            return headB;
        }
        else{
            headB = headB->next;
        }
    }
    
   return headB;
    }
};
