	int search(string pat, string txt) {
	    // code here
	    map<char,int>temp;
	    int count = 0;
	    map<char,int>mp;
	    for(int i =0 ;i<pat.size();i++){
	        mp[pat[i]]++;
	    }
	    
	    int s = 0;
	    int e = 0;
	    
	    while(e<txt.size()){
	        temp[txt[e]]++;
	        
	        if((e-s+1)<pat.size()){
	            e++;
	        }
	        else if ((e-s+1) == pat.size()){
	            
	            if(temp == mp){
	                count++;
	            }
	            
	            temp[txt[s]]--;
	            
	                        if(temp[txt[s]] == 0){
                temp.erase(txt[s]);
            }
	            
	            s++;
	            e++;
	        }
	    }
	    return count;
	    
	}
// Time complexity :- O(N+M)
// Space Complexity :- O(N+M)
