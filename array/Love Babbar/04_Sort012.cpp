


    void sort012(int a[], int n)
    {
        // code here 
        int start = 0;
        int mid =0;
        int end = n-1;
        
        
        while(mid <=end){
            if(a[mid] ==0){
                swap(a[mid], a[start]);
                mid++;
                start++;
                
            }
            else if (a[mid] == 1){
                mid++;
            }
            else if (a[mid] == 2){
                swap(a[mid], a[end]);
                end --;
            
            }
        }
        
        
    }
    // Time Complexity :- O(n)
    // Space Complexity :- O(1)
