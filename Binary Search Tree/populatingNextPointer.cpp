

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL){
            return root;
        }

        queue<Node *> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();

            if(size == 0){
                return root;
            }
            while(size>0){
                Node *temp;
                 if(size>1){
                     temp = q.front();
                     q.pop();
                     Node *nextadd = q.front();
                     temp->next = nextadd;
                 }
                 else{
                     temp = q.front();
                     q.pop();
                 }
                 if(temp->left){
                     q.push(temp->left);
                 }
                 if(temp->right){
                     q.push(temp->right);
                 }
            size--;
            }
        }
        return root;
    }
};
