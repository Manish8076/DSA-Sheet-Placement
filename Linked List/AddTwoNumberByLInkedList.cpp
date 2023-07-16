
class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
     struct Node *prev = NULL;
     struct Node *curr = head;
     struct Node *forward = NULL;
     while(curr!=NULL){
     // pehle current ke next pointer ko previos ko point karna hai   
     forward = curr->next;
     curr->next = prev;
     // ab prev or curr pointer ko increment karna hai
     prev = curr;
      curr = forward;
     }      
     return prev;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
     
    first = reverseList(first);
    second = reverseList(second);
        
    Node *head = NULL;
    Node *tail = NULL;
    Node *temp = NULL;
    int carry = 0;
    int sum = 0;
    
    
    while(first != NULL || second != NULL){
        
    sum = carry  + ( first? first->data : 0) + (second? second->data :0);
    carry = (sum>=10)? 1 : 0;
    sum = sum%10;
    
    temp = new Node(sum);
    
    if(head == NULL){
        head = temp;
    }
    else {
        tail->next = temp;
    }
    
    if(first){
        first = first->next;
    }
    if(second){
        second = second->next;
    }
    
    tail = temp;
    }
    
    
     
     if(carry>0){
         tail->next = new Node(carry);
     }  
     
     head = reverseList(head);
        
    return head;    
    }
};
