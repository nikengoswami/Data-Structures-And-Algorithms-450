/*
    link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

    kadane's algorithm
*/


// ----------------------------------------------------------------------------------------------------------------------- //
 long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long min = INT_MIN;
       long long max = min;
       
       int i;
       long long sum = 0;
       
       for(i=0; i<n; i++)
       {
           sum = sum + arr[i];
           
           if(sum >= max){
               max = sum;
               
           }
               
           if(sum < 0){
               sum = 0;
           }
       }
       
       return max;
    }
};
