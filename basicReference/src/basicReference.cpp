//============================================================================
// Name        : basicReference.cpp
// Author      : Alan Donham
// Version     : 1
// Copyright   : Your copyright notice
// Description : Use of a reference to increment value by 1
//============================================================================

#include <iostream>
using namespace std;


void addOne(int &num){
	//This function writes the new value to the
	//memory address of the variable passed in by using a reference to it
	num += 1;
}

int main() {

	int number = 0;
	addOne(number);

	cout << number<< endl;
	return 0;
}
