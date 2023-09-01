

class Solution {
public:
    
    void preorder(TreeNode* root, vector<int>&ans){
        if(root!= NULL){
            ans.push_back(root->val);
            preorder(root->left, ans);
            preorder(root->right, ans);
        }
    }
    
    void flatten(TreeNode* root) {
        if(root == NULL){
            return;
        }
        vector<int>ans;
        preorder(root,ans);
         
        TreeNode *temp = root;
        for(int i =1; i<ans.size(); i++){
            TreeNode *tempo = new TreeNode(ans[i]);
            temp->left = NULL;
            temp->right = tempo;
            temp = tempo;
        }

        }
};
