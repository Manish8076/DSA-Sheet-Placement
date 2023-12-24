
// <<<<<<<<<<<<<<=================== Appraoach 1 =======================>>>>>>>>>>>>

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int>ans;

    // int sm =secondSmallest(a, n);
    // int lg =secondLargest(a,n);

    // ans.push_back(lg);
    // ans.push_back(sm);

    sort(a.begin(), a.end());

    ans.push_back(a[n-2]);
    ans.push_back(a[1]);
    
    return ans;
    
}


// <<<<<<<<<==================== Approach 2 =========================>>>>>>>>>>>>>>


int secondSmallest(vector<int>arr,int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(vector<int>arr,int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int>ans;

    int sm =secondSmallest(a, n);
    int lg =secondLargest(a,n);

    ans.push_back(lg);
    ans.push_back(sm);


    
    return ans;
    
}



