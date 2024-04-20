    string removeOuterParentheses(string s) {
        string ans;
        int count =0;

        for(int i=0; i<s.size(); i++){

        if(s[i] == '('){
            if(count >=1){
                ans.push_back(s[i]);
            }
            count++;
        }
        else{
            if(count>=2){
                ans.push_back(s[i]);
            }
            count--;
        }
    }
    return ans;
    }
// Time Complexity :- O(N)
// Space Complexity :- O(N)
