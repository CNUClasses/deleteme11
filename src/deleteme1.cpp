//============================================================================
// Name        : deleteme1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

const int REQUIRED_NUMB_ARGUMENTS =4;	//program itself plus expected arguments
const string WRONG_NUMBER_ARGS = "This program requires 3 arguments of the form prog a1 a2 a3 ";
const int FAIL_WRONG_NUMBER_ARGS =-1;

int main(int argc, char *argv[]) {

	if (argc != 4){
		cout<<WRONG_NUMBER_ARGS<<endl;
		return FAIL_WRONG_NUMBER_ARGS;
	}

	string program = argv[0];
	string a1 = argv[1];
	string a2 = argv[2];
	string a3 = argv[3];

	cout<<"Running "<<program<< " with args "<<a1<<" and " << a2<<" and " <<a3<<endl;
	return 0;
}
