/*
    link: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1

    sol: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
*/



// ----------------------------------------------------------------------------------------------------------------------- //
// correct solution
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=n-1,j=0;
	    while(i>=0 && j<m){
	        if(arr1[i]>arr2[j]){
	            int temp = arr1[i];
	            arr1[i]=arr2[j];
	            arr2[j]=temp;
	            i--;j++;
	        }else 
	            {break;}
	            
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
};


