

class Solution {
public:
    int removeDuplicates(vector<int>& arr) {

        int n = arr.size();
           if (n == 0)
        return 0;

    int j = 0; // Index to keep track of the unique elements

    // Traverse the array and copy unique elements to their correct positions
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    // Return the updated size (index of the last unique element + 1)
    return j + 1;
    }
};
