
// <<<<<<<<<<================= Approach 1 =============================>>>>>>>>>>>
class Solution
{
   public:
   
    int findSum(int A[], int N)
    {
    	//code here.

    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i =0; i<N ;i++){
        if(A[i] < mini){
            mini = A[i];
        }
        if(A[i] > maxi){
            maxi = A[i];
        }
    }
    	
    	
    	return (maxi+mini);
    }
