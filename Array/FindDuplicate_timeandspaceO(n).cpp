class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        
        vector<int>ans;
        
        for(int i = 0; i<n ; i++){
            int index = arr[i]%n;
            arr[index]  += n;
        }
        
        for(int i=0; i<n ;i++){
             if((arr[i]/n) >= 2){
                 ans.push_back(i);
             
             }
        }
        
        if(ans.size() ==0){
            ans.push_back(-1);
        }
        return ans;    
    }
        
    
};
