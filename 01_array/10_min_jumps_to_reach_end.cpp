/*
    link: https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#
*/


// ----------------------------------------------------------------------------------------------------------------------- //
class Solution{
 static int minJumps(int[] arr){
   
       int count=0;
       int m=arr[0];
       int i=0;
       if(arr.length==0 || arr[0]==0){
           return -1;
       }
       while(i<arr.length){
           count++;
           m=arr[i];
           i+=m;
       }
       return count;
   }
};
