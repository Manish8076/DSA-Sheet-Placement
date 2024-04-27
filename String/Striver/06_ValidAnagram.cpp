    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int>ms;
        unordered_map<char,int>mt;

        for(int i =0; i<s.size(); i++){
            ms[s[i]] = ms[s[i]] +1;
            mt[t[i]] = mt[t[i]] +1;
        }
        return ms == mt;
    }
// Time Compleixity :- O(N)
// Space Complexity :- O(S) + O(T)
