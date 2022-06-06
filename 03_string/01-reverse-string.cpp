/*
    link: https://leetcode.com/problems/reverse-string/
*/


// ----------------------------------------------------------------------------------------------------------------------- //
// method 1
class Solution {
public:
    void reverseString(vector<char>& s) {
        int h=s.size()-1;
        int l=0;
        char temp;
        while(l<h){
            temp = s[h];
            s[h]=s[l];
            s[l]=temp;
            l++,h--;
                
        }
    }
};
