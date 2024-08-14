    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int>mp;
    int start = 0;
    int end = 0;
    int ans = -1;
    
    
    while(end < s.size()){
        
        mp[s[end]]++;
        
        if(mp.size()<k){
            end++;
        }
        
        if (mp.size()== k){
            ans = max(ans, (end-start+1));
            end++;
        }
        else if(mp.size()>k){
            
            while(mp.size()>k){
                mp[s[start]]--;
                if(mp[s[start]] == 0){
                    mp.erase(s[start]);
                }
                start++;
            }
        end++;
        )
    }
        return ans;

    }
// Time Complexity :- O(N)
// Space Complexity :- O(K)
