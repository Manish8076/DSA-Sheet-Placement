

class Solution {
public:
     
     vector<int>prevSmaller(vector<int>&arr){
        stack<int>st;
        int n = arr.size();
        vector<int>ans;

        for(int i = 0; i<n; i++){
           
           while(st.empty() == false && arr[st.top()]>= arr[i]){
               st.pop();
           }
           int res = (st.empty())? -1 : st.top();
           st.push(i);
           ans.push_back(res);
        }
        return ans;
     }    
     

    vector<int>nextSmaller(vector<int>&arr){
        stack<int>st;
        int n = arr.size();
        vector<int>ans;

        for(int i = n-1; i>=0; i--){
     
           while(st.empty()== false && arr[st.top()]>=arr[i]){
               st.pop();
           }
           int res = (st.empty())? n : st.top();
           st.push(i);
           ans.push_back(res);
        }
        reverse(ans.begin(), ans.end());
        return ans;
     }    


    int largestRectangleArea(vector<int>& height) {
           int res = 0;
           int n = height.size();

           vector<int>prev = prevSmaller(height);

           vector<int>next = nextSmaller(height);
           for(int i=0; i<n; i++){
              int curr = ( next[i]-prev[i]-1) *height[i];
              res = max(res, curr);
           }
           return res;
    }
};
