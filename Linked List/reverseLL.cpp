class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
     Node *prev = NULL;
     Node *curr = head;
     Node *forward = NULL;
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
    
};
