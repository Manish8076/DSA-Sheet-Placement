
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int maxi = INT_MIN;
    vector<int>ans;

    for(int i =a.size()-1; i>=0; i--){
        if(a[i] > maxi){
            maxi = a[i];
            ans.push_back(a[i]);
        }
    }

    return ans;

}

// Time Complexity :- O(N)
// Space Complexity :- O(1)
