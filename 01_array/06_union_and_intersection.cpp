/*
    link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

    
*/


// ----------------------------------------------------------------------------------------------------------------------- //

//                                      FIRST APPROACH                              //
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int res[n+m]={0};
        int d=0;
        
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                d++;
            }
        }
    }
      return n+m-d;  
    }
};

//                     OPTIMIZED ALGO  //

class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
          int gtr = n<m?m:n;
        set<int> s;
       for(int i = 0;i<big;i++) {
           if (i<n) {
           s.insert(a[i]);
           }
           if (i<m) {
           s.insert(b[i]);
     }
 }
       return s.size();
   }
};
