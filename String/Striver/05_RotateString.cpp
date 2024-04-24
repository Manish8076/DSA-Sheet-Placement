    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        // for(int i =0; i<s.size()-1; i++){
        //     char temp = s[s.size()-1];
        //     for(int j = s.size()-1; j>=0; j--){
        //         s[j+1] = s[j];
        //     }
        //     s[0] = temp;
        //     if(s == goal){
        //         return true;
        //     }
        // }
        // return false;
        int n = s.size();
       if(s == goal) return true;
       for(int i =0; i<n; i++){
        string ans = s.substr(i) + s.substr(0,i);
        if(ans == goal){
            return true;
        }

       }
        return false;
    }
// Time Complexity :- O(N)
// Space Complexity :- O(1)
