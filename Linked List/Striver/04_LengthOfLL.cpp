
int length(Node *head)
{
	//Write your code here  
    int count = 0;
    while(head != NULL){
        count++;
        head  = head->next;
    }
    return count;
}

// Time Complexity :- O(N)
// Space Complexity :- O(1) 
