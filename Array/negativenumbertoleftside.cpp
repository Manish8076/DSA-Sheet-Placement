
#include <bits/stdc++.h>
using namespace std;
 
void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
 
int arr[8] = { 1,-1,5,-45, 8 ,-55 ,-88,9};  
  
}
  
