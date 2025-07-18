// A C++ program to illustrate Caesar Cipher Technique
#include <iostream>
using namespace std;

// This function receives text and shift and
// returns the encrypted text
string encrypt(string text, int s)
{
	string result = "";
	int number=1;

	// traverse text
	for (int i=0;i<text.length();i++)
	{
		// apply transformation to each character
		// Encrypt Uppercase letters
		if (isupper(text[i]))
        {
            result += char(int(text[i]+number-65)%26 +65);
            number++;
        }


	// Encrypt Lowercase letters
	else
    {
        result += char(int(text[i]+number-97)%26 +97);
        number++;
    }


	}

	// Return the resulting string
	return result;
}
string dencrypt(string text, int s)
{
	string result = "";
	int number=1;

	// traverse text
	for (int i=0;i<text.length();i++)
	{
		// apply transformation to each character
		// Encrypt Uppercase letters
		if (isupper(text[i]))
        {
            result += char(int(text[i]-number-65+26)%26 +65);
            number++;
        }

	}

	// Return the resulting string
	return result;
}
// Driver program to test the above function
int main()
{
	string text="";
	getline(cin,text);
	int s = 4;
	cout << "Text : " << text<<endl;
	cout << "\nShift: " << s<<endl;
	cout << "\nCipher: " << encrypt(text, s)<<endl;
	//cout<<dencrypt(text,s);
	return 0;
}
