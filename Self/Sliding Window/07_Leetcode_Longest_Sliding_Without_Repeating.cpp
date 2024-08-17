    int lengthOfLongestSubstring(string s) {
        int start =0;
        int end = 0;
        int n = s.size();
        map<char,int>mp;
        int ans = 0;

        while(end<n){
            mp[s[end]]++;
            
            if(mp.size() == (end-start+1)){
                ans = max(ans,(end-start+1));
                end++;
            }
            else if (mp.size()< (end-start+1) ){
                while(mp.size()<(end-start+1)){
                    mp[s[start]]--;
                    if(mp[s[start]] == 0){
                        mp.erase(s[start]);
                    }
                    start++;
                }
                end++;
            }

        }
        return ans;
    }
// Time Complexity :- O(N)
// Space Complexity :- O(N)
