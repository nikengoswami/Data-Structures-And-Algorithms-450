/*
    link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

    logic: iterate mid and if mid==0 then swap with low and then low++, mid++
           if mid==2 then swap with high and then high--, mid
           else mid++ as it would be 1.

    variation: 2-pointer
*/



// ----------------------------------------------------------------------------------------------------------------------- //
class Solution
{
    public:
    void sort012(int a[], int n){
    int l=0, m=0, h=n - 1;
    
    while(m<=h){
        
        switch(a[m]){
            case 0:
                swap(a[l++], a[m++]);
                break;
            case 1:
                m++;
                break;
            case 2:
                swap(a[h--], a[m]);
                break;
        }
    }
}

    
};


int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl; 
    }
    return 0;
}
