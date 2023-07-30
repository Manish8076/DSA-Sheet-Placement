#include <bits/stdc++.h>
using namespace std;


void ansss(vector<vector<int>>arr,int nrow, int mcol){

vector<int>ans;
  for(int col =0; col<mcol; col++){

    if(col&1){
        for(int row = nrow-1; row>=0; row--){
            ans.push_back(arr[row][col]);
        }
    }
    else{
        for(int row = 0; row<nrow; row++){
            ans.push_back(arr[row][col]);
        }
    }
  
  }
 
 
   for(int i =0; i<ans.size(); i++){
       cout<<ans[i]<<" ";
   }
 
}

int main()
{ 
  vector<vector<int>>ans = {{1,2,3},{4,5,6},{7,8,9}};
  ansss(ans,3,3);

    return 0;
}
