// CPP program to move every character
// K times ahead in a given string
#include <bits/stdc++.h>
using namespace std;

// Function to move string character
void encode(string s,int k){

	// changed string
	string newS;

	// iterate for every characters
	for(int i=0; i<s.length(); ++i)
	{
		// ASCII value
		int val = int(s[i]);

		// store the duplicate
		int dup = k;

		// if k-th ahead character exceed 'z'
		if(val + k > 122){
			k -= (122-val);
			k = k % 26;
			newS += char(96 + k);
		}
		else
			newS += char(val + k);

		k = dup;
	}

	// print the new string
	cout<<newS;
}

// driver code
int main(){
	string str = "";
	cin>>str;
	int k = 28;

	// function call
	encode(str, k);

	return 0;
}

// This code is contributed by Sanjit_Prasad
