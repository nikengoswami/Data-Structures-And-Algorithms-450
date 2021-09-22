/*
    link: https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1



*/


// { Driver Code Starts
//Initial Template for C

#include<stdio.h>

 // } Driver Code Ends
//User function Template for C

#include<algorithm>
class Solution{
   public:
 
   int kthSmallest(int arr[], int l, int r, int k) {
       
       int len = sizeof(arr)/sizeof(arr[0]);
       cout<<"length "<<r<<endl;
       sort(arr, arr+r+1);
       cout<<"ap"<<k<<endl;
       for(int i=0;i<=r;i++){
           cout<<arr[i]<<" ";
       }
        cout<<endl<<k<<endl;
       return arr[k-1];
 }
};

   }
// { Driver Code Starts.
 
int main()
{
    int test_case;
    scanf("%d",&test_case);
    while(test_case--)
    {
        int number_of_elements;
        scanf("%d", &number_of_elements);
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            scanf("%d", &a[i]);
            
        int k;
        scanf("%d",&k);
        printf("%d",kthSmallest(a, 0, number_of_elements-1, k));
        printf("\n");
    }
    return 0;
}  // } Driver Code Ends
