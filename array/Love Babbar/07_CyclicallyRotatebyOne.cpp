

void rotate(int arr[], int n)
{
    
    int last = arr[n-1];
    
    for(int i =n; i>=1; i--){
        arr[i] = arr[i-1];
    }
    
    arr[0] = last;
    
}

// Time Complexity :- O(1)
// Space Complexity :- O(1)
