    string reverseWords(string s) {
        int n = s.size();
        int i =0;
        string ans = "";
        while(i < n){

            while(i<n && s[i]== ' '){
                i++;
            }
            string temp="";

            while(i < n && s[i] != ' '){
                temp += s[i];
                i++;
            }

            if(temp.size()>0){
                if(ans.size() == 0){
                    ans += temp;
                }
                else{
                    ans = temp + " " + ans;
                }
            }
        }
        return ans;
    }
// Time Complexity :- O(N^2)
// Space Complexity :- O(N)
