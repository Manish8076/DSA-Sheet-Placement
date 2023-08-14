

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>anss;
        queue<TreeNode*>q;
        
        if(root== NULL){
            return ans;
        }

        q.push(root);
        q.push(NULL);

        while(!q.empty()){

        TreeNode* temp = q.front();
        q.pop();

        if(temp == NULL){
            ans.push_back(anss);
            anss.clear();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            anss.push_back(temp->val);

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

        }
        return ans;
    }
};
