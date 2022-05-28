/*
    link: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

 
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

string reverseWord(string str){

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
