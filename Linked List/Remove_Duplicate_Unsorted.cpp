
class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     
     Node*curr = head;
     
     map<int,int>m;
     
     m[curr->data] = 1;
     
     Node *prev = curr;
     curr = curr->next;
     
     while (curr != NULL ){
         
         if(m[curr->data]){
             prev ->next = curr->next;
             free(curr);
         }
         else{
             m[curr->data] = 1;
             prev = curr;
         }
         curr = prev->next;
         
     }
     
     return head;
     
    }
};
