/*
    link: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

    note: array is pass by reference so no need to worry while changing value it will change in original array.
*/


// ----------------------------------------------------------------------------------------------------------------------- //
#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  string res="";
  int slen=str.length()-1;
  int i=0;
  int j = 0;
  for(int i=slen;i>=0;i--){
      res += str[i];
  }
  return res;
}

// ----------------------------------------------------------------------------------------------------------------------- //
