vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
 
                                                 list<long long>l;
                                                 vector<long long>ans;
                                                 long long s = 0;
                                                 long long e = 0;
                                                 
                                                 while(e<N){
                                                     if(A[e]<0){
                                                         l.push_back(A[e]);
                                                     }
                                                     if((e-s+1) < K){
                                                         e++;
                                                     }
                                                     else if( (e-s+1)== K ){
                                                         if(l.empty()){
                                                             ans.push_back(0);
                                                         }
                                                         else{
                                                             ans.push_back(l.front());
                                                             
                                                             if(A[s]==l.front()){
                                                                 l.pop_front();
                                                             }
                                                         }
                                                             s++;
                                                             e++;
                                                     }
                                                 }
                                                 return ans;
                                                 
                                             }
// Time Complexity :- O(N)
// Space Compllexity :- O(N)
