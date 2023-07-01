class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergeinterval;

        if(intervals.size()== 0){
            return intervals;
        }
        sort(intervals.begin(), intervals.end());
        vector<int>tempintervals = intervals[0];

        for(auto it : intervals){

         if(it[0] <= tempintervals[1]){
           tempintervals[1] = max(it[1], tempintervals[1]);
         }
         else{
             mergeinterval.push_back(tempintervals);
             tempintervals = it;
         }
           
        }
    mergeinterval.push_back(tempintervals);
    return mergeinterval;

    }
};
