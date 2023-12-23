    string reverseWord(string str)
    {
        // Your code goes here
        int start =0;
        int end = str.size()-1;
        
        while(start<end){
            swap(str[start], str[end]);
            
            start++;
            end--;
             
        }
        return str;
    }
