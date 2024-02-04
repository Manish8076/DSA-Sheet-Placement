

int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
        int ans = -1;

    for(int i =0; i<n; i++){
        if(arr[i] == num){
            ans =i;
            return ans;
        }
    }


    return ans;
}


// Time Complexity :- O(N)
// Space Complexity :- O(1)
