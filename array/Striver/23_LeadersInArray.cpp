
    vector<int> leaders(int n, int arr[]) {
        // Code here
        vector<int>ans;
        ans.push_back(arr[n-1]);
        for(int i =n-2; i>=0; i--){
            if(arr[i] >= ans.back()){
                ans.push_back(arr[i]);
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;

    }

// Time Complexity :- O(N)
// Space Complexity :- O(1)
