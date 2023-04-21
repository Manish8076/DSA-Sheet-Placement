
//User function Template for C++

string reverseWord(string str){
    
  //Your code here
int start = 0;
int end = str.length()-1;
    
    
    while( start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end --;
        
    }
    
    
return str;    
    
    
