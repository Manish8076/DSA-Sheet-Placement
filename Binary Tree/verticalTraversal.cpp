

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         
       
         map<int,map<int,multiset<int>>>m;
        queue<pair<TreeNode*,pair<int,int>>>q;

        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>>temp = q.front();
            q.pop();

            TreeNode* frontnode = temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;

            m[hd][level].insert(frontnode->val);

            if(frontnode->left){
                q.push(make_pair(frontnode->left, make_pair(hd-1, level+1)));
            }

             if(frontnode->right){
                q.push(make_pair(frontnode->right, make_pair(hd+1, level+1)));
            }

        }




    vector < vector < int >> ans;
    for (auto p: m) {
      vector < int > col;
      for (auto q: p.second) {
         col.insert(col.end(), q.second.begin(), q.second.end());
      }
      ans.push_back(col);
  }
  return ans;
}   


};
