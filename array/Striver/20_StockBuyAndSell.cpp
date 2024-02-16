
int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int maxProfit = 0;
    int miniPrice = INT_MAX;

    for(int i =0; i<n; i++){
        miniPrice = min(miniPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i]-miniPrice);
    }

    return maxProfit;
    }


// Time Complexity :- O(N)
// Space Complexity :- O(1)
