// PalindromeC++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>


using namespace std;
class MyClass
{
public:

void isPalindrome(string str)
{

	 transform(str.begin(), str.end(), str.begin(), ::tolower);

	string rev = "";
	for (int i = str.length()-1; i >=0; i--)
	{
		rev += str[i];
	}
	if (rev.compare(str) == 0)
	{
		cout<<"string is a palindrome"<<endl;
	}
	else
	{
		cout<<"string is not a palindrome"<<endl;
	}
}


};


int _tmain(int argc, _TCHAR* argv[])
{
	string input;
	cout<<"enter a string to check : "<<endl;
	
	getline(cin,input);
	
	MyClass obj ;
	obj.isPalindrome(input);

	_gettch();
	
	
}

