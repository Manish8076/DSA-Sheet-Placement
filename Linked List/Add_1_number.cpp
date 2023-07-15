
class Solution
{
    public:
    
    Node* reverse( Node *head)
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
    
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
      head = reverse(head);
      
      Node *curr= head;
      
      while(curr!=NULL){
          
          if(curr->next == NULL && curr->data == 9){
              
              Node *temp = new Node(0);
              curr->data = 1;
              temp->next = head;
              head = temp;
              curr  = curr->next;
              
          }
          
          else if(curr->data == 9){
              curr->data = 0;
              curr = curr->next;
          }
          
          else {
              curr->data = curr->data + 1;
              curr = curr->next;
              break;
          }
          
      }
       head = reverse(head);
       
       return head;
    } 
};
