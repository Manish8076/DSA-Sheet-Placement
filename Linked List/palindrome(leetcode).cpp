

class Solution {
public:
  
// This is an approach with time O(n), space O(n)

//     bool palindrome(vector<int>ans){
//     bool anss = true;
//     int start = 0;
//     int end = ans.size()-1;
   
//    while(start <= end){
    
//     if(ans[start]  != ans[end]){
//         anss = false;
//         return anss;
//     }

//    }

// return anss;

//     }
    
//     bool isPalindrome(ListNode* head) {
        
//    vector<int>ans;
//    ListNode *temp = head;

//    while(temp != NULL){
//        ans.push_back(temp->val);
//    }

//    return palindrome(ans);

// But this is an approach with time O(N) and space O(N)
 ListNode *getmid (ListNode *head){

  ListNode *slow = head;
  ListNode *fast = head->next;

  while (fast != NULL && fast->next != NULL){

  slow = slow->next;
  fast = fast->next->next;

  }
return slow;
 }


ListNode *reverse(ListNode *head){

if ( head == NULL || head->next == NULL){
    return head;
}

ListNode *curr = head;
ListNode *forw = NULL;
ListNode *prev = NULL;


while(curr != NULL){
    forw = curr->next;
    curr->next = prev;
    prev = curr;
    curr= forw;
}
return prev;
}

bool isPalindrome(ListNode* head) {

if(head ->next == NULL){
    return true;
}

if(head->next->next == NULL){
    // if(head->val != head->next->val){
    //     return false;
    // }
    return head->val == head->next->val;
}

ListNode *middle = getmid(head);

ListNode *temp = middle->next;
 middle ->next = reverse(temp);

 ListNode *head1 = head;
 ListNode *head2 = middle->next;


 while(head2 != NULL){
     if(head1 -> val != head2 -> val){
         return false;
     }
     head1 = head1->next;
     head2 = head2 ->next;
 }

return true;
    }
};
