

    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        // frequency array ka concept hai 
        
        int maxi = INT_MIN;
        
        for(int i =0; i<n ;i++){
            if(a[i]>maxi){
                maxi = a[i];
            }
        }
        for(int i =0; i<m ;i++){
            if(b[i]>maxi){
                maxi = b[i];
            }
        }
        
        int temp[maxi+1] = {0};
        
        for(int i =0;i<n; i++){
            temp[a[i]]++;
        }
        
        for(int i =0;i<m; i++){
            temp[b[i]]++;
        }
        
        
        int count=0;
        
        for(int i=0; i<maxi+1; i++){
            if(temp[i] > 0){
                count++;
            }
        }
        
        return count;
        
    }




// Time Complexity :- O(n+m)
// Space Complexity :- O(n+m)

