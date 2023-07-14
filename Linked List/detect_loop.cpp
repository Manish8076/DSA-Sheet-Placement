class Solution
{
    public:
    //Function to check if the linked list has a loop.
bool detectLoop(Node* head)
    {
        // your code here
   if(head == NULL){
      return false;
       }
  
    Node *temp = head;
    map<Node*, bool>visited;
  
  
    while(temp!= NULL){
      
      if(visited[temp] == true){
          return true;
      }
      
      visited[temp] = true;
      temp = temp->next;
      }
  
  
      return false;        
    }
};
