


class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head == NULL{
        return NULL;
        }        

        // reverse first k node
        node *current = head;
        node *prev = NULL;
        node *forward = NULL;
        int count =0;
        
        while (current!=NULL && count <k){
            forward = current->next;
            current->next = prev;
            
            prev = current;
            current = forward;
            count++;
        }


        // reverse remaining k nodes
        if(forward != NULL)
    {
        head->next = reverse(forward,k);
    }
return prev;
    }
};
