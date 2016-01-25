//============================================================================
// Name        : basicPointer.cpp
// Author      : Alan Donham
// Version     : 1
// Copyright   : Your copyright notice
// Description : A basic pointer implementation
//============================================================================

#include <iostream>
using namespace std;

void multByTen(int *num){
	*num *= 10; //Dereference the pointer, mult by ten, then assign new value back to memory address
}

int main() {
	int number = 10;
	multByTen(&number);
	cout<< number << endl; //This will print the number multiplied by 10
	return 0;
}
