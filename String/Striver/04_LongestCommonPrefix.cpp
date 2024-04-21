   string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string str1 = strs[0];
        string str2 = strs[n-1];

        string ans = "";

        for(int i =0; i<str2.size(); i++){
            if(str1[i] == str2[i]){
                ans.push_back(str1[i]);
            }
            else{
                break;
            }
        }
        return ans;
    }
// Time Complexity :- O(N LogN)
// Space Complexity :- O(1)
