/*
	link: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
*/


// ----------------------------------------------------------------------------------------------------------------------- //
class Solution {
public:
    bool isPalindrome(string s) {
        string w="";
        int k=0;
         for( int i=0;i<s.size();i++ ){
            if( isalnum(s[i]) ){
                w+=tolower(s[i]);
                k++;
            }
        }
        
        if(k==1)
            return 1;
        
                int j=0;
                k--;
        while(j<k){
            if(w[j]!=w[k]){
                return false;
            }  
            k--,j++;  
        }
        return true;
    }
};
