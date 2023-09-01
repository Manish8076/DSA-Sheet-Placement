

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
     void change(Node *&root){
        
        if(root == NULL){
            return ;
        }
        change(root->left);
        change(root->right);
        
        swap(root->left, root->right);
        
        
    }
    void mirror(Node* node) {
        // code here
        change(node);
         
    }
};
