/*
    link: https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

*/


// ----------------------------------------------------------------------------------------------------------------------- //
#include <bits/stdc++.h>
using namespace std;
 
void arrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}
