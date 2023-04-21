

class Solution
{
   public:
   
   
   int max (int A[], int N){
       
       int temp  = A[0];
       
       for( int i = 1 ; i <N ; i++){
           if( temp < A[i]){
               temp = A[i];
           }
       }
       
       return temp;
       
   }
   
   
  int min(int A[] , int N){
      
      
       int temp  = A[0];
       
       for( int i = 1 ; i <N ; i++){
           if( temp > A[i]){
               temp = A[i];
           }
       }
       
       return temp;
      
  } 
   
    int findSum(int A[], int N)
    {
    
    int maximum = max(A , N);
    int minimum = min(A , N);
    
    
    int sum =  maximum + minimum;
    
    return sum;
    	//code here.
    }

};
