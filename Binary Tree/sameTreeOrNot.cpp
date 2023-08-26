class Solution {
public:

    void inorder(TreeNode *node, vector<int>& ans){
        if(node!= NULL){
            inorder(node->left,ans);
            ans.push_back(node->val);
            inorder(node->right, ans);
        }
        else{
            ans.push_back(10000);
        }
    }


    
    void preorder(TreeNode *node, vector<int>& ans){
        if(node!= NULL){
            ans.push_back(node->val);
            preorder(node->left,ans);
            preorder(node->right, ans);
        }
        else{
            ans.push_back(10000);
        }
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {

        vector<int>inp,inq,prep,preq;
        inorder(p, inp);
        inorder(p, inq);

        preorder(p,prep);
        preorder(q,preq);



        if(inp == inq && prep == preq){
            return true;
        }
        else{
            return false;
        }
    }
};
