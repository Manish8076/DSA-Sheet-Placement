
#include <unordered_map>
#include<bits/stdc++.h>


int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here

        int n = a.size(); 

    unordered_map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];     
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

// Time Complexity :- O(N*logN)
// Space Complexity :- O(N)
