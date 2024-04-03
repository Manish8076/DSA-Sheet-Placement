    bool isValid(string s) {
        stack<int>st;

        for(int i = 0; i<s.size(); i++){

            if(st.empty() && ( s[i]==')' || s[i]=='}' || s[i]==']' )){
                return false;
            }


            if(s[i] == '(' || s[i] == '{' || s[i] == '[' ){
                st.push(s[i]);
            }
            else {
                if(s[i] == ')' && st.top() == '(' ){
                    st.pop();
                }
                else if(s[i] == ')' && st.top() != '('){
                    st.push(s[i]);
                }
                if(s[i] == '}' && st.top() == '{' ){
                    st.pop();
                }
                else if(s[i] == '}' && st.top() != '{'){
                    st.push(s[i]);
                }
                if(s[i] == ']' && st.top() == '[' ){
                    st.pop();
                }
                else if(s[i] == ']' && st.top() != '['){
                    st.push(s[i]);
                }            
            }
        }
        return st.empty();
    }
// Time Complexity :- O(N)
// Space Complexity :- O(1)
