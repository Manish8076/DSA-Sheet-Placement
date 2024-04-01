    int lengthOfLastWord(string s) {
        int ans =0;
        int i = s.length() - 1;
        for(i = s.length()-1; i>0; i--){
            if(s[i] != ' '){
                break;
            }
            else{
                continue;
            }
        }

        for(; i>=0; i--){
            if(s[i] == ' '){
                break;
            }
            ans++;
        }
        return ans;
    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
