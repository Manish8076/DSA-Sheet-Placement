    string largestOddNumber(string num) {
        string ans = "";
        string temp = "";
        int tempp;

        for(int i =0; i<num.size(); i++){
            temp += num[i];
            tempp = (int)num[i];

            if(tempp%2 != 0){
                ans = temp;
            }
        }
    return ans;
    }
// Time Complexity :- O(N)
// Space Complexity :- O(N)
