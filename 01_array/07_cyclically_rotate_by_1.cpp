/*
    link: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
*/


// ----------------------------------------------------------------------------------------------------------------------- //
void rotate(int arr[], int n)
{
    int x=arr[n-1];
    for (int i=0;i<n;i++){
            swap(arr[i],x);
}
}
