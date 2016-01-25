//============================================================================
// Name        : dataStructures.cpp
// Author      : Alan Donham
// Version     : 1
// Copyright   : Your copyright notice
// Description : A compilation of data structures
//============================================================================

/*
 * This file will be the driver to show the implementation
 * of the data structures available in this project.
 *
 * All of the following data structures are designed only to store integers.
 */

#include <iostream>
#include "LinkedList.hpp"
#include "Stack.hpp"
using namespace std;

int main() {
	cout << "Data Structure: Linked List " << endl;
	LinkedList *list = new LinkedList();
	list->append(1);
	list->append(2);
	list->append(2);
	list->append(3);
	list->append(73);
	list->append(99);
	list-> remove(2);
	list->remove(3);
	list->remove(99);
//	list->iterate();

	cout << "Data Structure: Stack " << endl;
	Stack *stack = new Stack();
	stack->add(1);
	stack->add(2);
	stack->add(3);
	//stack->iterate();
	int val;
	stack->pop(val);
	cout<<val<<endl;
	stack->pop(val);
	cout<<val<<endl;
	return 0;
}
