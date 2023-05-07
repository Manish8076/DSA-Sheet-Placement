


#include<bits/stdc++.h>

class Solution{
  public:
    int minJumps(int arr[], int n){
        
        // Your code here
        
    if(n<=1){
        return 0;
    }    
    
    if(arr[0] == 0){
        return -1;
    }
        
        
    int mx = arr[0];
    int step = arr[0];
    int jump =1;
    
    for(int i = 1; i<n ; i++){
        
        if(i==n-1){
            return jump;
        }
        
        step--;
        
        mx = max(mx,arr[i]+i);
        
        if(step ==0){
            jump++;
            
            if(mx<=i)
            return -1;
            
            
        step = mx-i;    
        }
        
    }
    return -1;        
        
}
};
