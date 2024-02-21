

    void moveZeroes(vector<int>& nums) {
        // Approach 1 :- Using two pointer approach 
        
    //         int j = -1;
    //         int n = a.size();
    // //place the pointer j:
    // for (int i = 0; i < n; i++) {
    //     if (a[i] == 0) {
    //         j = i;
    //         break;
    //     }
    // }

    // //no non-zero elements:
    // if (j == -1) return;

    // //Move the pointers i and j
    // //and swap accordingly:
    // for (int i = j + 1; i < n; i++) {
    //     if (a[i] != 0) {
    //         swap(a[i], a[j]);
    //         j++;
    //     }
    // }


    // Approach 2

    int n = nums.size();
    int j =0;

    for(int i =0; i<n; i++){
        if(nums[i]!= 0){
            nums[j] = nums[i];
            j++;
        }
    }
    for(;j<n; j++){
        nums[j] = 0;
    }
    }

// For both the apporach the complexity is same 
// Time Complexity :- O(N)
// Scpace Complexity :- O(1) 

