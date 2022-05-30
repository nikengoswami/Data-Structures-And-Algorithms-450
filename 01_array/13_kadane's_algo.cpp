/*
    link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
*/


// ----------------------------------------------------------------------------------------------------------------------- //
//----------TIME LIMIT EXCEEDED----------//

long maxSum = -999999999;
       for (int i = 0; i < n; i++) {
           int sum = 0;
           for (int j = i; j < n; j++) {
               sum = sum + arr[j];
               if (sum > maxSum) {
                   maxSum = sum;
               }
           }
       }
       return maxSum;



//----------------------------------OPTIMIZED------------------------------------------------------------------------------//

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
       
      // Your code here
       int  max = INT_MIN;
       int  mth=0;
       
       for(int  i=0;i<n;i++){
           mth+=arr[i];
           if(mth>max){
               max =mth;
           }
           
           if(mth<0){
               mth =0;
           }
       }
       
       return max ;
}

};


// ----------------------------------------------------------USING DP------------------------------------------------------------- //




int maxSubarraySum(int arr[], int n) {
    int dp[n];
    dp[0] = max(INT_MIN, arr[0]);
    int omax = dp[0];

    for (int i = 1;i < n;i++) {

        dp[i] = max(arr[i] + dp[i - 1], arr[i]);

        omax = max(dp[i], omax);
    }
    return omax;
}
