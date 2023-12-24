/* <<<<<<<=================== Approach 1 =======================>>>>>>>>>>>>*/
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
     sort(arr.begin(), arr.end());

    return arr[n-1];
}





/* <<<<<==================== Approach 2 =======================>>>>>>>>> */
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
