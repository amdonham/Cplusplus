/*
 * This is an implementation of a linked list data structure to store integers
 */
#ifndef NODE_H
#define NODE_H
#include "Node.hpp"
#endif

using namespace std;

class LinkedList{
private:
	Node *head;
	Node *curr;

public:
	void append(int num){
		Node* temp = new Node();

		temp->setVal(num);
		if(curr != 0){
			curr->setNext(temp);
			curr = temp;
		}
		else{
			head = temp;
			curr = temp;
		}
	}

	void iterate(){
		Node *it = head;
		while(it->hasNext()){
			cout << it->getVal() <<endl;
			it = it->getNext();
		}
		cout<< it->getVal() << endl;

	}

	void remove(int val){
		Node *it = head;
		if(it->getVal() == val){
			head = it->getNext();
			curr = it->getNext();
		}
		else{
			bool removed = false;
			while(it->hasNext() && !removed){
				if(it->getNext()->getVal() == val){
					it->setNext(it->getNext()->getNext());
					removed = true;
				}
				else{
					it = it->getNext();
				}
			}
		}
	}
};
