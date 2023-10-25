
// Time Complexity O(n)  ===================== OPTIMAL APPROACH================================  


#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int ans=0;

    for(int i=0; i<arr.size(); i++){
        if(ans<arr[i]){
            ans = arr[i];
        }
    }
    return ans;
}


