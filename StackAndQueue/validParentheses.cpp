
class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
       
       if(s.size() ==1){
           return false;
       }
       if(s[0]==')' || s[0] == ']' || s[0] == '}' ){
         return false;
       }

       for(int i =0; i<s.size(); i++){
        //    if(s[i]=='(' || s[i] == '[' || s[i] == '{'){
        //        st.push(s[i]);
        //    }

        //    if(s[i] == ')'){
        //        if(st.top()=='('){
        //            st.pop();
        //        }
        //        else{
        //            return false;
        //        }
        //    }
           
        //     if(s[i] == '}'){
        //        if(st.top()=='{'){
        //            st.pop();
        //        }
        //        else{
        //            return false;
        //        }
        //    }

        //     if(s[i] == ']'){
        //        if(st.top()=='['){
        //            st.pop();
        //        }
        //        else{
        //            return false;
        //        }
        //    }  
          if(st.empty()){
              st.push(s[i]);
          }
          else if((st.top() == '(' && s[i] == ')') ||
                    (st.top() == '{' && s[i] == '}') ||
                    (st.top() == '[' && s[i] == ']') ){
                        st.pop();
                    }

           else{
               st.push(s[i]);
           }          

       }
     if(st.empty()){
         return true;
     }
     else{
         return false;
     }

    }
};
