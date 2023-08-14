

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int count =0;

        if(root==NULL){
            return count;
        }
        
        queue<TreeNode*>q;
   
        q.push(root);
        q.push(NULL);

        while(!q.empty()){

        TreeNode* temp = q.front();
        q.pop();

        if(temp == NULL){
            count++;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

        }
        return count;
    }
};
