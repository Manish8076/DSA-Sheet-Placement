

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
        // code here 
        int countzero = 0;
        int countone = 0;
        int counttwo = 0;
        
        
        for(int i= 0; i<n ; i++){
            
            if(a[i] == 0){
                countzero++;
                
            }
            else if (a[i] == 1){
                countone++;
            }
            else if (a[i] == 2){
                counttwo++;
            }
            
        }
        
    
        int i = 0;
        
    for  ( i = 0 ; i < countzero ; i++ )  
    {  
        a[i] = 0 ;  
    }  
    for ( i = countzero ; i < countzero + countone ; i++ )  
    {  
        a[i] = 1 ;  
    }  
    for ( i = countzero + countone ; i < n ; i++ )  
    {  
        a[i] = 2 ;  
    } 
            
        
        
        
        
    }
    
};
