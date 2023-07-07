  bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int s =0;
        unordered_map<int,int>m;
        
        for(int i =0; i<n ;i++){
            s = s+arr[i];
            
            if(s==0 or m[s] or arr[i]== 0){
                return true;
            }
            else{
                m[s] = 1;
            }
            
        }
      return false;    
        
    }
