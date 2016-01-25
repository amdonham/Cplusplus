/*
 * This is an implementation of the stack datastructure
 */
#ifndef NODE_H
#define NODE_H
#include "Node.hpp"
#endif

class Stack{
private:
	Node* head;


public:
	void add(int num){
		Node* temp = new Node();
		temp->setVal(num);
		temp->setNext(head);
		head = temp;
	}
	void iterate(){
		Node* it = head;
		while(it->hasNext()){
			cout<<it->getVal()<<endl;
			it = it->getNext();
		}
		cout<<it->getVal()<<endl;
	}
	void pop(int &val){
		Node *temp = head;
		if(head){head = head->getNext();}
		if(temp){val = temp->getVal();}
	}
};
