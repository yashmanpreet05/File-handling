#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str;
	ofstream o;// to open and write in file
	o.open("yashman.txt");// file name
	o<<"yashmanpreet singh sidhu(::)";// write text in file
	o.close();// to close the file
	ifstream s; // to read text from the file 
	s.open("yashman.txt");//  reading text from thisfile
	//s>>str;// when a single char. wants to copy u have to write this in code
	while(getline(s,str)) // while is used for geting full out output with space 
	{
		cout<<str;// showing input from the file on output screen
	
	}
	s.close();// to close the file
	return 0;
}